#include "scheduler.h"

#include "hook.h"

static Ricardo::Logger::ptr g_logger = ICEY_LOG_NAME("system");
namespace Ricardo {

/// 当前线程池指针
static thread_local Scheduler* t_scheduler = nullptr;
/// 当前协程指针
static thread_local Fiber* t_scheduler_fiber = nullptr;

Scheduler::Scheduler(size_t threads, bool use_caller, const std::string& name)
    : m_name(name) {
  ICEY_ASSERT(threads > 0);

  if (use_caller) {
    Ricardo::Fiber::GetThis();
    --threads;

    ICEY_ASSERT(GetThis() == nullptr);
    t_scheduler = this;

    m_rootFiber.reset(new Fiber(std::bind(&Scheduler::run, this), 0, true));
    Ricardo::Thread::SetName(m_name);

    t_scheduler_fiber = m_rootFiber.get();
    m_rootThread = Ricardo::GetThreadId();
    m_threadIds.push_back(m_rootThread);
  } else {
    m_rootThread = -1;
  }
  m_threadCount = threads;
}

Scheduler::~Scheduler() {
  ICEY_ASSERT(m_stopping);
  if (GetThis() == this) {
    t_scheduler = nullptr;
  }
}

Scheduler* Scheduler::GetThis() { return t_scheduler; }

Fiber* Scheduler::GetMainFiber() { return t_scheduler_fiber; }

void Scheduler::start() {
  MutexType::Lock lock(m_mutex);
  if (!m_stopping) {
    return;
  }
  m_stopping = false;
  ICEY_ASSERT(m_threads.empty());

  m_threads.resize(m_threadCount);
  for (size_t i = 0; i < m_threadCount; ++i) {
    m_threads[i].reset(new Thread(std::bind(&Scheduler::run, this),
                                  m_name + std::to_string(i)));

    m_threadIds.push_back(m_threads[i]->getId());
  }
  lock.unlock();

  // if(m_rootFiber){
  //   //m_rootFiber->swapIn();
  //   m_rootFiber->call();
  //   ICEY_LOG_INFO(g_logger)<<"call out "<<m_rootFiber->getState();
  // }
}

void Scheduler::stop() {
  m_autoStop = true;
  if (m_rootFiber && m_threadCount == 0 &&
      (m_rootFiber->getState() == Fiber::TERM ||
       m_rootFiber->getState() == Fiber::INIT)) {
    ICEY_LOG_INFO(g_logger) << this << " stop";
    m_stopping = true;

    if (stopping()) {
      return;
    }
  }

  // bool exit_on_this_fiber = false;
  if (m_rootThread != -1) {
    ICEY_ASSERT(GetThis() == this);

  } else {
    ICEY_ASSERT(GetThis() != this);
  }

  m_stopping = true;
  for (size_t i = 0; i < m_threadCount; ++i) {
    tickle();
  }

  if (m_rootFiber) {
    tickle();
  }
  if (m_rootFiber) {
    // while (!stopping()) {
    //   if (m_rootFiber->getState() == Fiber::TERM ||
    //       m_rootFiber->getState() == Fiber::EXCEPT) {
    //     m_rootFiber.reset(new Fiber(std::bind(&Scheduler::run, this), 0,
    //     true)); ICEY_LOG_INFO(g_logger) << "root fiber is term, reset";
    //     t_fiber = m_rootFiber.get();
    //   }
    //   m_rootFiber->call();
    // }
    if (!stopping()) {
      ICEY_LOG_DEBUG(g_logger) << "call";
      m_rootFiber->call();
    }
  }

  std::vector<Thread::ptr> thrs;
  {
    MutexType::Lock lock(m_mutex);
    thrs.swap(m_threads);
  }
  for (auto& i : thrs) {
    i->join();
  }

  // if(exit_on_this_fiber){
  // }
}

void Scheduler::setThis() { t_scheduler = this; }

void Scheduler::run() {
  ICEY_LOG_INFO(g_logger) << "run";
  set_hook_enable(true);
  setThis();

  if (Ricardo::GetThreadId() != m_rootThread) {
    t_scheduler_fiber = Fiber::GetThis().get();
  }

  Fiber::ptr idle_fiber(new Fiber(std::bind(&Scheduler::idel, this)));
  Fiber::ptr cb_fiber;

  FiberAndThread ft;

  while (true) {
    ft.reset();
    /// 是否进行协程调度
    bool tickle_me = false;
    /// 是否在运行
    bool is_active = false;
    {
      MutexType::Lock lock(m_mutex);
      /// 遍历协程等待队列
      auto it = m_fibers.begin();
      while (it != m_fibers.end()) {
        /// 如果是任意线程且此线程不是当前线程
        if (it->thread != -1 && it->thread != Ricardo::GetThreadId()) {
          ++it;
          // 进行协程调度
          tickle_me = true;
          continue;
        }
        /// 如果此协程不存在并且协程执行函数也不存在,断言
        ICEY_ASSERT(it->fiber || it->cb);
        /// 如果此协程存在且在执行状态，跳过此次调度
        if (it->fiber && it->fiber->getState() == Fiber::EXEC) {
          ++it;
          continue;
        }
        /// 从协程调度队列中删除不满足条件的协程
        ft = *it;
        m_fibers.erase(it);
        ++m_activeThreadCount;
        /// 设置调度活动为true
        is_active = true;
        break;
      }
    }
    /// 需要调度
    if (tickle_me) {
      tickle();
    }

    /// 进行协程调度
    /// 按协程调度
    if (ft.fiber && (ft.fiber->getState() != Fiber::TERM ||
                     ft.fiber->getState() != Fiber::EXCEPT)) {
      ft.fiber->swapIn();
      --m_activeThreadCount;

      if (ft.fiber->getState() == Fiber::READY) {
        schedule(ft.fiber);
      } else if (ft.fiber->getState() != Fiber::TERM &&
                 ft.fiber->getState() != Fiber::EXCEPT) {
        ft.fiber->m_state = Fiber::HOLD;
      }
      ft.reset();
      /// 按协程执行函数调度
    } else if (ft.cb) {
      if (cb_fiber) {
        cb_fiber->reset(ft.cb);
      } else {
        cb_fiber.reset(new Fiber(ft.cb));
      }
      ft.reset();
      cb_fiber->swapIn();
      --m_activeThreadCount;
      if (cb_fiber->getState() == Fiber::READY) {
        schedule(cb_fiber);
        cb_fiber.reset();
      } else if (cb_fiber->getState() == Fiber::EXCEPT ||
                 cb_fiber->getState() == Fiber::TERM) {
        cb_fiber->reset(nullptr);
      } else {  // if(cb_fiber->getState() != Fiber::TERM){
        cb_fiber->m_state = Fiber::HOLD;
        cb_fiber.reset();
      }
    } else {
      if (is_active) {
        --m_activeThreadCount;
        continue;
      }
      if (idle_fiber->getState() == Fiber::TERM) {
        ICEY_LOG_INFO(g_logger) << "idel fiber term";
        break;
      }

      ++m_idleThreadCount;
      idle_fiber->swapIn();
      --m_idleThreadCount;
      if (idle_fiber->getState() != Fiber::TERM &&
          idle_fiber->getState() != Fiber::EXCEPT) {
        idle_fiber->m_state = Fiber::HOLD;
      }
    }
  }
}
void Scheduler::tickle() { ICEY_LOG_INFO(g_logger) << "tickle"; }

bool Scheduler::stopping() {
  MutexType::Lock lock(m_mutex);
  return m_autoStop && m_stopping && m_fibers.empty() &&
         m_activeThreadCount == 0;
}
void Scheduler::idel() {
  ICEY_LOG_INFO(g_logger) << "idel";
  while (!stopping()) {
    Ricardo::Fiber::YieldToHold();
  }
}

void Scheduler::switchTo(int thread) {
  ICEY_ASSERT(Scheduler::GetThis() != nullptr);
  if (Scheduler::GetThis() == this) {
    if (thread == -1 || thread == Ricardo::GetThreadId()) {
      return;
    }
  }
  schedule(Fiber::GetThis(), thread);
  Fiber::YieldToHold();
}
std::ostream& Scheduler::dump(std::ostream& os) {
  os << "[Scheduler name=" << m_name << " size=" << m_threadCount
     << " active_count=" << m_activeThreadCount
     << " idle_count=" << m_idleThreadCount << " stopping=" << m_stopping
     << " ]" << std::endl
     << "    ";
  for (size_t i = 0; i < m_threadIds.size(); ++i) {
    if (i) {
      os << ", ";
    }
    os << m_threadIds[i];
  }
  return os;
}

SchedulerSwitcher::SchedulerSwitcher(Scheduler* target) {
  m_caller = Scheduler::GetThis();
  if (target) {
    target->switchTo();
  }
}
SchedulerSwitcher::~SchedulerSwitcher() {
  if (m_caller) {
    m_caller->switchTo();
  }
}
}  // namespace Ricardo
