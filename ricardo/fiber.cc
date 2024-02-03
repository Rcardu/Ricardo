#include "fiber.h"

#include "config.h"
#include "log.h"
#include "macro.h"
#include "scheduler.h"
#include "util.h"

namespace Ricardo {

static Logger::ptr g_logger = ICEY_LOG_NAME("system");

static std::atomic<uint64_t> s_fiber_id{0};
static std::atomic<uint64_t> s_fiber_count{0};

/// 当前协程
static thread_local Fiber* t_fiber = nullptr;
/// 主协程
static thread_local Fiber::ptr t_threadFiber = nullptr;
// 创建协程配置
static ConfigVar<uint32_t>::ptr g_fiber_stack_size = Config::Lookup<uint32_t>(
    "fiber.stack_size", 128 * 1024, "fiber stack size");

class MallocStackAllocator {
 public:
  static void* Alloc(size_t size) { return malloc(size); }

  static void Dealloc(void* vp, size_t size) { return free(vp); }
};

using StackAllocator = MallocStackAllocator;

uint64_t Fiber::GetFiberId() {
  if (t_fiber) {
    return t_fiber->getId();
  }
  return 0;
}

Fiber::Fiber() {
  m_state = EXEC;
  SetThis(this);

  if (getcontext(&m_ctx)) {
    ICEY_ASSERT2(false, "getcontext");
  }

  ++s_fiber_count;
  ICEY_LOG_DEBUG(g_logger) << "Fiber::Fiber id = " << m_id;
}

Fiber::Fiber(std::function<void()> cb, size_t stacksize, bool use_caller)
    : m_id(s_fiber_id++), m_cb(cb) {
  ++s_fiber_count;
  m_stacksize = stacksize ? stacksize : g_fiber_stack_size->getValue();
  m_stack = StackAllocator::Alloc(m_stacksize);
  if (getcontext(&m_ctx)) {
    ICEY_ASSERT2(false, "getcontext");
  }
  m_ctx.uc_link = nullptr;
  m_ctx.uc_stack.ss_sp = m_stack;
  m_ctx.uc_stack.ss_size = m_stacksize;
  if (!use_caller) {
    makecontext(&m_ctx, &Fiber::MainFunc, 0);
  } else {
    makecontext(&m_ctx, &Fiber::CallerMainFunc, 0);
  }

  ICEY_LOG_DEBUG(g_logger) << "Fiber::Fiber id = " << m_id;
}

Fiber::~Fiber() {
  --s_fiber_count;
  if (m_stack) {
    ICEY_ASSERT(m_state == TERM || m_state == EXCEPT || m_state == INIT);
    StackAllocator::Dealloc(m_stack, m_stacksize);
  } else {
    ICEY_ASSERT(!m_cb);
    ICEY_ASSERT(m_state == EXEC);

    Fiber* cur = t_fiber;
    if (cur == this) {
      SetThis(nullptr);
    }
  }
  ICEY_LOG_DEBUG(g_logger) << "Fiber::~Fiber id = " << m_id;
}

void Fiber::reset(std::function<void()> cb) {
  ICEY_ASSERT(m_stack);
  ICEY_ASSERT(m_state == TERM || m_state == EXCEPT || m_state == INIT);

  m_cb = cb;
  if (getcontext(&m_ctx)) {
    ICEY_ASSERT2(false, "getcontext");
  }
  m_ctx.uc_link = nullptr;
  m_ctx.uc_stack.ss_sp = m_stack;
  m_ctx.uc_stack.ss_size = m_stacksize;

  makecontext(&m_ctx, &Fiber::MainFunc, 0);
  m_state = INIT;
}

void Fiber::call() {
  SetThis(this);
  m_state = EXEC;
  // ICEY_LOG_DEBUG(g_logger) << "Fiber " << getId() << " call.";
  if (swapcontext(&t_threadFiber->m_ctx, &m_ctx)) {
    ICEY_ASSERT2(false, "swapcontext");
  }
}

void Fiber::back() {
  SetThis(t_threadFiber.get());
  // ICEY_LOG_DEBUG(g_logger) << "Fiber " << getId() << " back.";
  if (swapcontext(&m_ctx, &t_threadFiber->m_ctx)) {
    ICEY_ASSERT2(false, "swapcontext");
  }
}

void Fiber::swapIn() {
  SetThis(this);
  // ICEY_LOG_DEBUG(g_logger) << "Fiber " << getId() << " swapIn.";
  ICEY_ASSERT(m_state != EXEC);
  m_state = EXEC;
  /// 将当前协程（例如协程2，切换到当前执行）
  if (swapcontext(&Scheduler::GetMainFiber()->m_ctx, &m_ctx)) {
    ICEY_ASSERT2(false, "swapcontext");
  }
}

void Fiber::swapOut() {
  SetThis(Scheduler::GetMainFiber());
  // ICEY_LOG_DEBUG(g_logger) << "Fiber " << getId() << " swapOut.";
  if (swapcontext(&m_ctx, &Scheduler::GetMainFiber()->m_ctx)) {
    ICEY_ASSERT2(false, "swapcontext");
  }
}

void Fiber::SetThis(Fiber* f) { t_fiber = f; }

Fiber::ptr Fiber::GetThis() {
  if (t_fiber) {
    return t_fiber->shared_from_this();
  }
  Fiber::ptr main_fiber(new Fiber);
  ICEY_ASSERT(t_fiber == main_fiber.get());
  t_threadFiber = main_fiber;
  return t_fiber->shared_from_this();
}

void Fiber::YieldToReady() {
  Fiber::ptr cur = GetThis();
  ICEY_ASSERT(cur->m_state == EXEC);
  cur->m_state = READY;
  cur->swapOut();
}

void Fiber::YieldToHold() {
  Fiber::ptr cur = GetThis();
  ICEY_ASSERT(cur->m_state == EXEC);
  // cur->m_state = HOLD;
  cur->swapOut();
}

uint64_t Fiber::TotalFibers() { return s_fiber_count; }

void Fiber::MainFunc() {
  Fiber::ptr cur = GetThis();
  ICEY_ASSERT(cur);
  try {
    cur->m_cb();
    cur->m_cb = nullptr;
    cur->m_state = TERM;
  } catch (std::exception& ex) {
    cur->m_state = EXCEPT;
    ICEY_LOG_ERROR(g_logger) << "Fiber Except: " << ex.what()
                             << " fiber_id: " << cur->getId() << std::endl
                             << Ricardo::BacktraceToString();
  } catch (...) {
    cur->m_state = EXCEPT;
    ICEY_LOG_ERROR(g_logger) << "Fiber Except: "
                             << " fiber_id: " << cur->getId() << std::endl
                             << Ricardo::BacktraceToString();
  }

  auto raw_ptr = cur.get();
  cur.reset();
  raw_ptr->swapOut();

  ICEY_ASSERT2(false,
               "never reach fiber_id= " + std::to_string(raw_ptr->getId()));
}

void Fiber::CallerMainFunc() {
  Fiber::ptr cur = GetThis();
  ICEY_ASSERT(cur);
  try {
    cur->m_cb();
    cur->m_cb = nullptr;
    cur->m_state = TERM;
  } catch (std::exception& ex) {
    cur->m_state = EXCEPT;
    ICEY_LOG_ERROR(g_logger) << "Fiber Except: " << ex.what()
                             << " fiber_id: " << cur->getId() << std::endl
                             << Ricardo::BacktraceToString();
  } catch (...) {
    cur->m_state = EXCEPT;
    ICEY_LOG_ERROR(g_logger) << "Fiber Except: "
                             << " fiber_id: " << cur->getId() << std::endl
                             << Ricardo::BacktraceToString();
  }

  auto raw_ptr = cur.get();
  cur.reset();
  raw_ptr->back();

  ICEY_ASSERT2(false,
               "never reach fiber_id= " + std::to_string(raw_ptr->getId()));
}

}  // namespace Ricardo
