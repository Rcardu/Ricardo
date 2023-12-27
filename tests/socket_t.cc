#include "address.h"
#include "iomanager.h"
#include "log.h"
#include "socket_s.h"
#include "ricardo.h"

static Ricardo::Logger::ptr g_logger = ICEY_LOG_ROOT();

void test_socket(){
  Ricardo::IPAddress::ptr addr = Ricardo::Address::LookupAnyIPAddress("www.baidu.com");
  if(addr){
    ICEY_LOG_INFO(g_logger) << "get address: " << addr->toString();
  }else{
    ICEY_LOG_ERROR(g_logger)<<"get address fail";
    return ;
  }
  Ricardo::Socket::ptr sock = Ricardo::Socket::CreateTCPSocket(addr);
  addr->setPort(80);
  if(!sock->connect(addr)){
    ICEY_LOG_ERROR(g_logger)<<"connect "<<addr->toString()<<" fail";
    return ;
  }else{
    ICEY_LOG_INFO(g_logger)<<"connect "<<addr->toString()<<" connected";
  }

  const char buff[] = "GET / HTTP/1.0\r\n\r\n";
  int rt = sock->send(buff, sizeof(buff));
  if(rt <= 0){
    ICEY_LOG_ERROR(g_logger)<<"send fail rt="<<rt;
    return ;
  }
  std::string buffs;
  buffs.resize(4096);
  rt = sock->recv(&buffs[0], buffs.size());
  if(rt<=0){
    ICEY_LOG_ERROR(g_logger)<<"send fail rt="<<rt;
    return ;
  }
  buffs.resize(rt);
  ICEY_LOG_INFO(g_logger)<<buffs;
}

int main()
{
  Ricardo::IOManager iom;
  iom.schedule(&test_socket);
    return 0;
}

