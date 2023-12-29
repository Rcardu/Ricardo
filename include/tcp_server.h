#pragma once

#include <cstdio>
#include <memory>
#include <vector>
#include "noncopyable.h"
#include "stdhead.h"
#include "iomanager.h"
#include "socket_s.h"
#include "address.h"


namespace Ricardo{
class TcpServer : public std::enable_shared_from_this<TcpServer> ,Noncopyable{
public:
  typedef std::shared_ptr<TcpServer> ptr;

  TcpServer(Ricardo::IOManager* worker = Ricardo::IOManager::GetThis(),
            Ricardo::IOManager* accept_woker = Ricardo::IOManager::GetThis());
  virtual ~TcpServer();

  virtual bool bind(Ricardo::Address::ptr addr);
  virtual bool bind(const std::vector<Address::ptr>& addrs,
                    std::vector<Address::ptr>& fails);
  virtual bool start();
  virtual void stop();

  uint64_t getRecvTimeut()const {return m_recvTimeout;}
  std::string getName()const{return m_name;}
  void setRecvTime(uint64_t v){m_recvTimeout = v;}
  void setName(const std::string& v){m_name = v;}

  bool isStop()const {return m_isStop;}
protected:
  virtual void handleClient(Socket::ptr client);
  virtual void startAccept(Socket::ptr sock);
private:
  std::vector<Socket::ptr>m_socks;
  IOManager* m_worker;
  IOManager* m_acceptWorker;
  uint64_t m_recvTimeout;
  std::string m_name;
  bool m_isStop;

};
}
