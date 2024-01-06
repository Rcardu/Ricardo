#pragma once
#include "http_session.h"
#include "tcp_server.h"

namespace Ricardo {
namespace http {

class HttpServer : public TcpServer {
 public:
  typedef std::shared_ptr<HttpServer> ptr;
  HttpServer(bool keepalive = false,
             Ricardo::IOManager* worker = Ricardo::IOManager::GetThis(),
             Ricardo::IOManager* accept_worker = Ricardo::IOManager::GetThis());

 protected:
  virtual void handleClient(Socket::ptr client) override;

 private:
  bool m_isKeepalive;
};
}  // namespace http
}  // namespace Ricardo
