#include "tcp_server.h"
#include <cstring>
#include <system_error>
#include <vector>
#include "address.h"
#include "config.h"
#include "iomanager.h"
#include "socket_s.h"
#include "log.h"

static Ricardo::Logger::ptr g_logger = ICEY_LOG_NAME("system");
namespace Ricardo{

Ricardo::ConfigVar<uint64_t>::ptr g_tcp_server_read_timeout =
    Ricardo::Config::Lookup("tcp_server.read_timeout", (60 * 1000 * 2ul),
                            "tcp server read timeout");

TcpServer::TcpServer(Ricardo::IOManager* worker,
                     Ricardo::IOManager* accept_woker)
    : m_worker(worker),
      m_acceptWorker(accept_woker),
      m_recvTimeout(g_tcp_server_read_timeout->getValue()),
      m_name("Ricardo/1.0.0"),
      m_isStop(true) {}

TcpServer:: ~TcpServer(){
  for(auto& i : m_socks){
    i->close();
  }
  m_socks.clear();
}
bool TcpServer::bind(Ricardo::Address::ptr addr) {
  std::vector<Address::ptr> addrs;
  std::vector<Address::ptr> fails;
  addrs.push_back(addr);
  return bind(addrs,fails);
}

bool TcpServer::bind(const std::vector<Address::ptr>& addrs,
                     std::vector<Address::ptr>& fails) {
  for (auto& addr : addrs) {
    Socket::ptr sock = Socket::CreateTCP(addr);
    if (!sock->bind(addr)) {
      ICEY_LOG_ERROR(g_logger)
          << "bind fail errno=" << errno << " errstr=" << strerror(errno)
          << " addr=[" << addr->toString() << "]";
      fails.push_back(addr);
      continue;
    }
    if (!sock->listen()) {
      ICEY_LOG_ERROR(g_logger)
          << "listen fail errno=" << errno << " erstr=" << strerror(errno)
          << " addr=[" << addr->toString() << "]";
      fails.push_back(addr);
      continue;
    }
    m_socks.push_back(sock);
  }
  if(!fails.empty()){
    m_socks.clear();
    return false;
  }
  for(auto& i: m_socks){
    ICEY_LOG_INFO(g_logger)<<"server bind success: "<<*i;
  }
  return true;
}
void TcpServer::startAccept(Socket::ptr sock){
  while(!m_isStop){
    Socket::ptr clinet = sock->accept();
    if(clinet){
      clinet->setRecvTimeout(m_recvTimeout);
      m_worker->schedule(
          std::bind(&TcpServer::handleClient, shared_from_this(), clinet));
    }else{
      ICEY_LOG_ERROR(g_logger)<<"accept errno="<<errno
        <<" errstr="<<strerror(errno);
    }
  }
}
 bool TcpServer::start(){
  if(!m_isStop){
    ICEY_LOG_DEBUG(g_logger)<<"Stop";
    return true;
  }
  m_isStop = false;
  for(auto& sock: m_socks){
    ICEY_LOG_INFO(g_logger)<<"start startAccept";
    m_acceptWorker->schedule(
        std::bind(&TcpServer::startAccept, shared_from_this(), sock));
  }
  return true;
 }
 void TcpServer::stop(){
  m_isStop = true;
  auto self = shared_from_this();
  m_acceptWorker->schedule([this, self]() {
    for (auto& sock : m_socks) {
      sock->cancelAll();
      sock->close();
    }
    m_socks.clear();
  });
 }

void TcpServer::handleClient(Socket::ptr client){
  ICEY_LOG_INFO(g_logger)<<"handleClient: "<<*client;
}

}

