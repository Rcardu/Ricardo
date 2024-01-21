#include "ricardo.h"

Ricardo::Logger::ptr g_logger = ICEY_LOG_ROOT();

void test_fiber() {
  static int s_count = 5;
  ICEY_LOG_INFO(g_logger) << "test in fiber s_count= " << s_count;

  sleep(1);
  if (--s_count >= 0) {
    Ricardo::Scheduler::GetThis()->schedule(&test_fiber,
                                            Ricardo::GetThreadId());
  }
}
void test_fiber1() {
  ICEY_LOG_INFO(g_logger) << "test in fiber";
  sleep(1);
}

int main(int argc, char* argv[]) {
  ICEY_LOG_INFO(g_logger) << "main";
  Ricardo::Scheduler sc(3);
  sc.start();
  sleep(2);
  ICEY_LOG_INFO(g_logger) << "schedule";
  sc.schedule(&test_fiber1);
  sc.stop();
  ICEY_LOG_INFO(g_logger) << "over";
  return 0;
}
