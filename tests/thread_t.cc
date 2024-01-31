#include "ricardo.h"

static Ricardo::Logger::ptr g_logger = ICEY_LOG_ROOT();

int count = 0;
// Ricardo::RWMutex s_mutex;
Ricardo::Mutex s_mutex;

void fun1() {
  ICEY_LOG_INFO(g_logger) << "name = " << Ricardo::Thread::GetName()
                          << " this.name: "
                          << Ricardo::Thread::GetThis()->getName()
                          << " id: " << Ricardo::GetThreadId() << " this.id: "
                          << Ricardo::Thread::GetThis()->getId();
  for (int i = 0; i < 100000; ++i) {
    // Ricardo::RWMutex::WriteLock lock(s_mutex);
    Ricardo::Mutex::Lock lock(s_mutex);
    ++count;
  }
}

void fun2() {
  while (true) {
    ICEY_LOG_INFO(g_logger) << "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
  }
}

void fun3() {
  while (true) {
    ICEY_LOG_INFO(g_logger) << "====================================";
  }
}

int main(int argc, char* argv[]) {
  ICEY_LOG_INFO(g_logger) << "thread test begin";
  YAML::Node root = YAML::LoadFile(
      "/home/Ricardo/Object/NetWork/Socket/SocketForCpp/tests/yaml/log2.yml");
  Ricardo::Config::LoadFormYaml(root);

  std::vector<Ricardo::Thread::ptr> thrs;
  for (int i = 0; i < 2; i++) {
    Ricardo::Thread::ptr thr1(
        new Ricardo::Thread(&fun3, "name_" + std::to_string(i * 2)));
    Ricardo::Thread::ptr thr2(
        new Ricardo::Thread(&fun2, "name_" + std::to_string(i * 2 + 1)));

    thrs.push_back(thr1);
    thrs.push_back(thr2);
  }
  for (size_t i = 0; i < thrs.size(); i++) {
    thrs[i]->join();
  }
  ICEY_LOG_INFO(g_logger) << "thread test end";
  ICEY_LOG_INFO(g_logger) << "count = " << count;

  return 0;
}
