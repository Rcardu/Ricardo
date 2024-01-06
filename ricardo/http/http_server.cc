#include "http_server.h"

#include "log.h"

static Ricardo::Logger::ptr g_logger = ICEY_LOG_NAME("system");

namespace Ricardo {
namespace http {

HttpServer::HttpServer(bool keepalive, Ricardo::IOManager* worker,
                       Ricardo::IOManager* accept_worker) {}
void HttpServer::handleClient(Socket::ptr client) {
  HttpSession::ptr session(new HttpSession(client));
  do {
    auto req = session->recvRequest();
    if (!req) {
      ICEY_LOG_WARN(g_logger)
          << "recv http request fail, errno=" << errno
          << " errstr=" << strerror(errno) << " client: " << *client;
      break;
    }
    HttpResponse::ptr rsp(
        new HttpResponse(req->getVersion(), req->isClose() || !m_isKeepalive));
    rsp->setBody("hello Ricardo");
    ICEY_LOG_INFO(g_logger) << "requset: " << std::endl << *req;
    ICEY_LOG_INFO(g_logger) << "response: " << std::endl << *rsp;

    session->sendResponse(rsp);
  } while (m_isKeepalive);
  session->close();
}

}  // namespace http
}  // namespace Ricardo
