#include <netinet/tcp.h>
#include <vector>
#include "address.h"
#include "tcp_server.h"
#include "iomanager.h"
#include "log.h"
#include "thread.h"
#include "util.h"

static Ricardo::Logger::ptr g_logger = ICEY_LOG_ROOT();
void run(){
  auto addr = Ricardo::IPAddress::LookupAny("0.0.0.0:5000");
  auto addr2 =
      Ricardo::UnixAddress::ptr(new Ricardo::UnixAddress("/tmp/unix_addr"));
  std::vector<Ricardo::Address::ptr> addrs;
  addrs.push_back(addr);
  addrs.push_back(addr2);

  Ricardo::TcpServer::ptr tcp_server(new Ricardo::TcpServer);
  std::vector<Ricardo::Address::ptr> failes;
  while(!tcp_server->bind(addrs,failes)){
    sleep(2);
  }
  tcp_server->start();
}


int main(int argc, char** argv){
  Ricardo::IOManager iom(2);
  iom.schedule(run);

  return 0;
}

