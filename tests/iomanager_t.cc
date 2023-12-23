#include "iomanager.h"
#include "ricardo.h"

Ricardo::Logger::ptr g_logger = ICEY_LOG_NAME("icey");

void test_fiber() {
  ICEY_LOG_INFO(g_logger) << "test_fiber";
  int sock = socket(AF_INET, SOCK_STREAM, 0);
  fcntl(sock, F_SETFL, O_NONBLOCK);

  sockaddr_in addr;
  memset(&addr, 0, sizeof(addr));
  addr.sin_family = AF_INET;
  addr.sin_port = htons(80);
  inet_pton(AF_INET, "39.156.66.10", &addr.sin_addr.s_addr);

  if (!connect(sock, (const sockaddr*)&addr, sizeof(addr))) {

  } else if (errno == EINPROGRESS) {
    ICEY_LOG_INFO(g_logger)
        << "add event errno = " << errno << " " << strerror(errno);
    Ricardo::IOManager::GetThis()->addEvent(
        sock, Ricardo::IOManager::READ,
        []() { ICEY_LOG_INFO(g_logger) << "read callback"; });

    Ricardo::IOManager::GetThis()->addEvent(
        sock, Ricardo::IOManager::WRITE, [&sock]() {
          ICEY_LOG_INFO(g_logger) << "write callback";
          //close(sock);
          Ricardo::IOManager::GetThis()->cancelEvent(sock, Ricardo::IOManager::READ);
          close(sock);
        });
  } else {
    ICEY_LOG_INFO(g_logger) << "else " << errno << " " << strerror(errno);
  }
}

void test1() {
  std::cout << "EPOLLIN = " << EPOLLIN<< std::endl << "EPOLLOUT = " << EPOLLOUT << std::endl;
  Ricardo::IOManager iom(2,false);
  iom.schedule(&test_fiber);
}

Ricardo::Timer::ptr s_timer;

void test_timer() {
  Ricardo::IOManager iom(2);
  s_timer = iom.addTimer(
      1000,
      []() {
        static int i = 0;
        ICEY_LOG_INFO(g_logger) << "hello timer i = " << i;
        if (++i == 3) {
          s_timer->reset(2000);
          //s_timer->cancel();
        }
      },
      true);
}

int main(int argc, char* argv[]) {
  //test1();
  test_timer();
  return 0;
}
