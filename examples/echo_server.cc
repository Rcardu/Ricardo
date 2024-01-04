#include "address.h"
#include "bytearray.h"
#include "iomanager.h"
#include "log.h"
#include "stdhead.h"
#include "tcp_server.h"

static Ricardo::Logger::ptr g_logger = ICEY_LOG_ROOT();

class EchoServer : public Ricardo::TcpServer {
 public:
  EchoServer(int type);
  void handleClient(Ricardo::Socket::ptr client);

 private:
  int m_type = 0;
};
EchoServer::EchoServer(int type) : m_type(type) {}
void EchoServer::handleClient(Ricardo::Socket::ptr client) {
  ICEY_LOG_INFO(g_logger) << "handleClient " << *client;
  Ricardo::ByteArray::ptr ba(new Ricardo::ByteArray);
  while (true) {
    ba->clear();
    std::vector<iovec> iovs;
    ba->getWriteBuffers(iovs, 1024);

    int rt = client->recv(&iovs[0], iovs.size());
    if (rt == 0) {
      ICEY_LOG_INFO(g_logger) << "clinet close: " << *client;
      break;
    } else if (rt < 0) {
      ICEY_LOG_ERROR(g_logger)
          << "clinet erreo rt=" << rt << " errno   =" << errno
          << " errstr=" << strerror(errno);
      break;
    }
    ba->setPosition(ba->getPosition() + rt);
    ba->setPosition(0);
    // ICEY_LOG_INFO(g_logger)
    //     << "rect rt=" << rt
    //     << " data =" << std::string((char*)iovs[0].iov_base, rt);
    if (m_type == 1) {  // text
      std::cout << ba->toString() << std::endl;
    } else {
      std::cout << ba->toHexString() << std::endl;
    }
    std::cout.flush();
  }
}
int type = 1;
void run() {
  ICEY_LOG_INFO(g_logger) << "server type=" << type;
  EchoServer::ptr es(new EchoServer(type));
  auto addr = Ricardo::Address::LookupAny("0.0.0.0:8020");
  while (!es->bind(addr)) {
    sleep(2);
  }
  ICEY_LOG_INFO(g_logger) << "link start!";
  es->start();
}

int main(int argc, char** argv) {
  if (argc < 2) {
    ICEY_LOG_INFO(g_logger)
        << "used as(" << argv[0] << " -t] or [" << argv[0] << " -b]";
    return 0;
  }
  if (!strcmp(argv[1], "-b")) {
    type = 2;
  }
  Ricardo::IOManager iom(2);
  iom.schedule(run);

  return 0;
}
