#include "iomanager.h"

static Ricardo::Logger::ptr g_logger = ICEY_LOG_NAME("system");
namespace Ricardo {

enum EpollCtlOp {};
static std::ostream& operator<<(std::ostream& os, const EpollCtlOp& op) {
  switch ((int)op) {
#define XX(ctl) \
  case ctl:     \
    return os << #ctl;
    XX(EPOLL_CTL_ADD);
    XX(EPOLL_CTL_MOD);
    XX(EPOLL_CTL_DEL);
    default:
      return os << (int)op;
  }
#undef XX
}
static std::ostream& operator<<(std::ostream& os, EPOLL_EVENTS events) {
  if (!events) {
    return os << "0";
  }
  bool first = true;
#define XX(E)       \
  if (events & E) { \
    if (!first) {   \
      os << "|";    \
    }               \
    os << #E;       \
    first = false;  \
  }
  XX(EPOLLIN);
  XX(EPOLLPRI);
  XX(EPOLLOUT);
  XX(EPOLLRDNORM);
  XX(EPOLLRDBAND);
  XX(EPOLLWRNORM);
  XX(EPOLLWRBAND);
  XX(EPOLLMSG);
  XX(EPOLLERR);
  XX(EPOLLHUP);
  XX(EPOLLRDHUP);
  XX(EPOLLONESHOT);
  XX(EPOLLET);
#undef XX
  return os;
}

IOManager::FdContext::EventContext& IOManager::FdContext::getContext(
    IOManager::Event event) {
  switch (event) {
    case IOManager::READ:
      return read;
    case IOManager::WRITE:
      return write;
    default:
      ICEY_ASSERT2(false, "getContext");
  }
  throw std::invalid_argument("getContext invalid event");
}

void IOManager::FdContext::resetContext(EventContext& ctx) {
  ctx.scheduler = nullptr;
  ctx.fiber.reset();
  ctx.cb = nullptr;
}

void IOManager::FdContext::triggerEvent(IOManager::Event event) {
  ICEY_ASSERT(events & event);
  events = (Event)(events & ~event);
  EventContext& ctx = getContext(event);
  if (ctx.cb) {
    ctx.scheduler->schedule(&ctx.cb);
  } else {
    ctx.scheduler->schedule(&ctx.fiber);
  }
  ctx.scheduler = nullptr;
  return;
}

IOManager::IOManager(size_t threads, bool use_caller, const std::string& name)
    : Scheduler(threads, use_caller, name) {
  m_epfd = epoll_create(5000);
  ICEY_ASSERT(m_epfd > 0);

  int rt = pipe(m_tickleFds);
  ICEY_LOG_INFO(g_logger) << "return value = " << rt;
  ICEY_ASSERT(!rt);

  epoll_event event;
  memset(&event, 0, sizeof(epoll_event));
  event.events = EPOLLIN | EPOLLET;
  event.data.fd = m_tickleFds[0];

  rt = fcntl(m_tickleFds[0], F_SETFL, O_NONBLOCK);
  ICEY_ASSERT(!rt);

  rt = epoll_ctl(m_epfd, EPOLL_CTL_ADD, m_tickleFds[0], &event);
  ICEY_ASSERT(!rt);

  contextResize(32);

  start();
}

IOManager::~IOManager() {
  stop();
  close(m_epfd);
  close(m_tickleFds[0]);
  close(m_tickleFds[1]);

  for (size_t i = 0; i < m_fdContexts.size(); ++i) {
    if (m_fdContexts[i]) {
      delete m_fdContexts[i];
    }
  }
}

void IOManager::contextResize(size_t size) {
  m_fdContexts.resize(size);

  for (size_t i = 0; i < m_fdContexts.size(); i++) {
    if (!m_fdContexts[i]) {
      m_fdContexts[i] = new FdContext;
      m_fdContexts[i]->fd = i;
    }
  }
}

int IOManager::addEvent(int fd, Event event, std::function<void()> cb) {
  FdContext* fd_ctx = nullptr;
  RWMutexType::ReadLock rdlock(m_mutex);
  if ((int)m_fdContexts.size() > fd) {
    fd_ctx = m_fdContexts[fd];
    rdlock.unlock();
  } else {
    rdlock.unlock();
    RWMutexType::WriteLock wrlock(m_mutex);
    contextResize(fd * 1.5);
    fd_ctx = m_fdContexts[fd];
  }

  FdContext::MutexType::Lock lock(fd_ctx->mutex);
  if (fd_ctx->events & event) {
    ICEY_LOG_ERROR(g_logger)
        << "addEvent assert fd = " << fd << " event = " << event
        << " fd_ctx.event = " << fd_ctx->events;
    ICEY_ASSERT(!(fd_ctx->events & event));
  }

  int op = fd_ctx->events ? EPOLL_CTL_MOD : EPOLL_CTL_ADD;
  epoll_event epevent;
  epevent.events = EPOLLET | fd_ctx->events | event;
  epevent.data.ptr = fd_ctx;

  int rt = epoll_ctl(m_epfd, op, fd, &epevent);
  if (rt) {
    ICEY_LOG_ERROR(g_logger)
        << "epoll_ctl(" << m_epfd << ", " << (EpollCtlOp)op << ", " << fd
        << ", " << epevent.events << "): " << rt << " (" << errno << ") ("
        << strerror(errno) << ")";
    return -1;
  }
  ++m_pendingEventCount;
  fd_ctx->events = (Event)(fd_ctx->events | event);
  FdContext::EventContext& event_ctx = fd_ctx->getContext(event);
  ICEY_ASSERT(!event_ctx.scheduler && !event_ctx.fiber && !event_ctx.cb);

  event_ctx.scheduler = Scheduler::GetThis();
  if (cb) {
    event_ctx.cb.swap(cb);
  } else {
    event_ctx.fiber = Fiber::GetThis();
    ICEY_ASSERT2(event_ctx.fiber->getState() == Fiber::EXEC,
                 "state=" << event_ctx.fiber->getState());
  }
  return 0;
}

bool IOManager::delEvent(int fd, Event event) {
  RWMutexType::ReadLock rdlock(m_mutex);
  if ((int)m_fdContexts.size() <= fd) {
    return false;
  }
  FdContext* fd_ctx = m_fdContexts[fd];
  rdlock.unlock();

  FdContext::MutexType::Lock lock(fd_ctx->mutex);
  if (!(fd_ctx->events & event)) {
    return false;
  }

  Event new_events = (Event)(fd_ctx->events & ~event);
  int op = new_events ? EPOLL_CTL_MOD : EPOLL_CTL_DEL;
  epoll_event epevent;
  epevent.events = EPOLLET | new_events;
  epevent.data.ptr = fd_ctx;

  int rt = epoll_ctl(m_epfd, op, fd, &epevent);
  if (rt) {
    ICEY_LOG_ERROR(g_logger)
        << "epoll_ctl(" << m_epfd << " " << (EpollCtlOp)op << ", " << fd << ", "
        << epevent.events << "): " << rt << " (" << errno << ") ("
        << strerror(errno) << ")";
    return false;
  }

  --m_pendingEventCount;
  fd_ctx->events = new_events;
  FdContext::EventContext& event_ctx = fd_ctx->getContext(event);
  fd_ctx->resetContext(event_ctx);
  return true;
}

bool IOManager::cancelEvent(int fd, Event event) {
  RWMutexType::ReadLock rdlock(m_mutex);
  if ((int)m_fdContexts.size() <= fd) {
    return false;
  }
  FdContext* fd_ctx = m_fdContexts[fd];
  rdlock.unlock();

  FdContext::MutexType::Lock lock(fd_ctx->mutex);
  if (!(fd_ctx->events & event)) {
    return false;
  }

  Event new_events = (Event)(fd_ctx->events & ~event);
  int op = new_events ? EPOLL_CTL_MOD : EPOLL_CTL_DEL;
  epoll_event epevent;
  epevent.events = EPOLLET | new_events;
  epevent.data.ptr = fd_ctx;

  int rt = epoll_ctl(m_epfd, op, fd, &epevent);
  if (rt) {
    ICEY_LOG_ERROR(g_logger)
        << "epoll_ctl(" << m_epfd << " " << (EpollCtlOp)op << ", " << fd << ", "
        << epevent.events << "): " << rt << " (" << errno << ") ("
        << strerror(errno) << ")";
    return false;
  }

  fd_ctx->triggerEvent(event);
  --m_pendingEventCount;
  return true;
}

bool IOManager::cancelAll(int fd) {
  RWMutexType::ReadLock rdlock(m_mutex);
  if ((int)m_fdContexts.size() <= fd) {
    return false;
  }
  FdContext* fd_ctx = m_fdContexts[fd];
  rdlock.unlock();

  FdContext::MutexType::Lock lock(fd_ctx->mutex);
  if (!fd_ctx->events) {
    return false;
  }

  int op = EPOLL_CTL_DEL;
  epoll_event epevent;
  epevent.events = 0;
  epevent.data.ptr = fd_ctx;

  int rt = epoll_ctl(m_epfd, op, fd, &epevent);
  if (rt) {
    ICEY_LOG_ERROR(g_logger)
        << "epoll_ctl(" << m_epfd << " " << (EpollCtlOp)op << ", " << fd << ", "
        << epevent.events << "): " << rt << " (" << errno << ") ("
        << strerror(errno) << ")";
    return false;
  }

  if (fd_ctx->events & READ) {
    fd_ctx->triggerEvent(READ);
    --m_pendingEventCount;
  }
  if (fd_ctx->events & WRITE) {
    fd_ctx->triggerEvent(WRITE);
    --m_pendingEventCount;
  }
  ICEY_ASSERT(fd_ctx->events == 0);
  return true;
}

IOManager* IOManager::GetThis() {
  return dynamic_cast<IOManager*>(Scheduler::GetThis());
}

void IOManager::tickle() {
  if (hasIdleThreads()) {
    //: ICEY_LOG_INFO(g_logger) << "no thread tickle";
    return;
  }
  int rt = write(m_tickleFds[1], "T", 1);
  ICEY_ASSERT(rt == 1);
}

bool IOManager::stopping() {
  uint64_t timeout = 0;
  return stopping(timeout);
}

bool IOManager::stopping(uint64_t& timeout) {
  timeout = getNextTimer();
  return timeout == ~0ull && m_pendingEventCount == 0 && Scheduler::stopping();
}

void IOManager::idel() {
  ICEY_LOG_DEBUG(g_logger) << "idel";
  const uint64_t MAX_EVENTS = 256;
  epoll_event* events = new epoll_event[MAX_EVENTS]();
  std::shared_ptr<epoll_event> shared_events(
      events, [](epoll_event* ptr) { delete[] ptr; });

  while (true) {
    uint64_t next_timeout = 0;
    if (ICEY_UNLICKLY(stopping(next_timeout))) {
      ICEY_LOG_INFO(g_logger)
          << "name = " << getName() << " idle stopping exit";
      break;
    }

    int rt = 0;
    do {
      static const int MAX_TIMEOUT = 3000;
      if (next_timeout != ~0ull) {
        next_timeout =
            (int)next_timeout > MAX_TIMEOUT ? MAX_TIMEOUT : next_timeout;
      } else {
        next_timeout = MAX_TIMEOUT;
      }
      rt = epoll_wait(m_epfd, events, MAX_EVENTS, (int)next_timeout);

      if (rt < 0 && errno == EINTR) {
      } else {
        break;
      }
    } while (true);

    // 获取当前时间点满足条件的回调函数
    std::vector<std::function<void()>> cbs;
    listExpiredCb(cbs);
    if (!cbs.empty()) {
      // ICEY_LOG_DEBUG(g_logger)<<"no timer cbs.size = "<<cbs.size();
      schedule(cbs.begin(), cbs.end());
      cbs.clear();
    }

    for (int i = 0; i < rt; i++) {
      epoll_event& event = events[i];
      if (event.data.fd == m_tickleFds[0]) {
        uint8_t dummy[256];
        while (read(m_tickleFds[0], &dummy, sizeof(dummy)) > 0)
          ;
        continue;
      }

      FdContext* fd_ctx = (FdContext*)event.data.ptr;
      FdContext::MutexType::Lock lock(fd_ctx->mutex);
      if (event.events & (EPOLLERR | EPOLLHUP)) {
        event.events |= (EPOLLIN | EPOLLOUT) & fd_ctx->events;
      }
      int real_events = NONE;
      if (event.events & EPOLLIN) {
        real_events |= READ;
      }
      if (event.events & EPOLLOUT) {
        real_events |= WRITE;
      }
      if ((fd_ctx->events & real_events) == NONE) {
        continue;
      }
      int left_events = (fd_ctx->events & ~real_events);
      int op = left_events ? EPOLL_CTL_MOD : EPOLL_CTL_DEL;
      event.events = EPOLLET | left_events;

      int rt2 = epoll_ctl(m_epfd, op, fd_ctx->fd, &event);
      if (rt2) {
        ICEY_LOG_ERROR(g_logger)
            << "epoll_ctl(" << m_epfd << " " << (EpollCtlOp)op << ", "
            << fd_ctx->fd << ", " << event.events << "): " << rt2 << " ("
            << errno << ") (" << strerror(errno) << ")";
        continue;
      }
      if (real_events & READ) {
        fd_ctx->triggerEvent(READ);
        --m_pendingEventCount;
      }
      if (real_events & WRITE) {
        fd_ctx->triggerEvent(WRITE);
        --m_pendingEventCount;
      }
    }
    Fiber::ptr cur = Fiber::GetThis();
    auto raw_ptr = cur.get();
    cur.reset();

    raw_ptr->swapOut();
  }
}

void IOManager::onTimerInsertedAtFront() { tickle(); }
}  // namespace Ricardo
