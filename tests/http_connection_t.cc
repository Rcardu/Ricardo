#include "http_connection.h"
#include "iomanager.h"
#include "log.h"
#include "stdhead.h"

static Ricardo::Logger::ptr g_logger = ICEY_LOG_ROOT();

void run() {
  Ricardo::Address::ptr addr =
      Ricardo::Address::LookupAnyIPAddress("www.sylar.top:80");
  if (!addr) {
    ICEY_LOG_ERROR(g_logger) << "get addr error";
    return;
  }
  Ricardo::Socket::ptr sock = Ricardo::Socket::CreateTCP(addr);
  bool rt = sock->connect(addr);
  if (!rt) {
    ICEY_LOG_ERROR(g_logger) << "connect " << *addr << " failed";
    return;
  }
  Ricardo::http::HttpConnection::ptr conn(
      new Ricardo::http::HttpConnection(sock));
  Ricardo::http::HttpRequest::ptr req(new Ricardo::http::HttpRequest);
  req->setPath("/blog/");
  req->setHeader("host", "www.sylar.top");
  ICEY_LOG_INFO(g_logger) << "req: " << std::endl << *req;

  conn->sendRequest(req);
  auto rsp = conn->recvResponse();

  if (!rsp) {
    ICEY_LOG_ERROR(g_logger) << "recv response error";
    return;
  }
  ICEY_LOG_INFO(g_logger) << "rsp: " << std::endl << *rsp;
}

int main(int argc, char** argv) {
  Ricardo::IOManager iom(2);
  iom.schedule(run);
  return 0;
}
