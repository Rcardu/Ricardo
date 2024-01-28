#include "hook.h"
#include "iomanager.h"
#include "log.h"

static Ricardo::Logger::ptr g_logger = ICEY_LOG_ROOT();

void test_sleep() {
  Ricardo::IOManager iom(1);
  iom.schedule([]() {
    sleep(2);
    ICEY_LOG_INFO(g_logger) << "sleep 2";
  });

  iom.schedule([]() {
    sleep(3);
    ICEY_LOG_INFO(g_logger) << "sleep 3";
  });
  ICEY_LOG_INFO(g_logger) << "test sleep";
}

void test_sock() {
  int sock = socket(AF_INET, SOCK_STREAM, 0);

  sockaddr_in addr;
  memset(&addr, 0, sizeof(addr));
  addr.sin_family = AF_INET;
  addr.sin_port = htons(80);
  inet_pton(AF_INET, "39.156.66.10", &addr.sin_addr.s_addr);

  ICEY_LOG_INFO(g_logger) << "begin connect";
  int rt = connect(sock, (const sockaddr*)&addr, sizeof(addr));
  ICEY_LOG_INFO(g_logger) << "connect rt= " << rt << " errno= " << errno;

  if (rt) {
    return;
  }

  const char data[] = "GET / HTTP/1.0\r\n\r\n";
  rt = send(sock, data, sizeof(data), 0);
  ICEY_LOG_INFO(g_logger) << "send rt= " << rt << " errno= " << errno;

  if (rt <= 0) {
    return;
  }

  std::string buff;
  buff.resize(4096);

  rt = recv(sock, &buff[0], buff.size(), 0);
  ICEY_LOG_INFO(g_logger) << "recv rt= " << rt << " errno= " << errno;

  if (rt <= 0) {
    return;
  }
  buff.resize(rt);
  ICEY_LOG_INFO(g_logger) << buff;
}

int main(int argc, char** agrv) {
  // test_sleep();
  Ricardo::IOManager iom;
  iom.schedule(test_sock);

  return 0;
}
