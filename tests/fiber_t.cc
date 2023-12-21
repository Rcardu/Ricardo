#include "ricardo.h"

Ricardo::Logger::ptr g_logger = ICEY_LOG_ROOT();

void run_in_fiber() {

  ICEY_LOG_INFO(g_logger) << "run_in_fiber begin";
  Ricardo::Fiber::YieldToHold();
  ICEY_LOG_INFO(g_logger) << "run_in_fiber end";
  Ricardo::Fiber::YieldToHold();
}

void test_fiber() {
  ICEY_LOG_INFO(g_logger) << "main begin -1";
  {
    Ricardo::Fiber::GetThis();
    ICEY_LOG_INFO(g_logger) << "main begin";
    Ricardo::Fiber::ptr fiber(new Ricardo::Fiber(run_in_fiber));
    fiber->swapIn();
    ICEY_LOG_INFO(g_logger) << "main after swapIn";
    fiber->swapIn();
    ICEY_LOG_INFO(g_logger) << "main after end1";
    fiber->swapIn();
  }
  ICEY_LOG_INFO(g_logger) << "main after end2";
}

int main() {
  Ricardo::Thread::SetName("main");
  std::vector<Ricardo::Thread::ptr> thrs;
  for (int i = 0; i < 3; i++) {
    thrs.push_back(Ricardo::Thread::ptr(
        new Ricardo::Thread(test_fiber, "name_" + std::to_string(i))));
  }
  for (auto i : thrs) {
    i->join();
  }

  return 0;
}
