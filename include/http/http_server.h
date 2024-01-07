#pragma once
#include "http_session.h"
#include "servlet.h"
#include "tcp_server.h"

namespace Ricardo {
namespace http {

class HttpServer : public TcpServer {
 public:
  typedef std::shared_ptr<HttpServer> ptr;
  HttpServer(bool keepalive = false,
             Ricardo::IOManager* worker = Ricardo::IOManager::GetThis(),
             Ricardo::IOManager* accept_worker = Ricardo::IOManager::GetThis());

  ServletDispatch::ptr getServletDispatch() const { return m_dispatch; }
  void setServletDispatch(ServletDispatch::ptr v) { m_dispatch = v; }

 protected:
  virtual void handleClient(Socket::ptr client) override;

 private:
  bool m_isKeepalive;
  ServletDispatch::ptr m_dispatch;
};
}  // namespace http
}  // namespace Ricardo
