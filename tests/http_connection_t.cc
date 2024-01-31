#include "http_connection.h"
#include "iomanager.h"
#include "log.h"
#include "stdhead.h"

static Ricardo::Logger::ptr g_logger = ICEY_LOG_ROOT();

void test_pool() {
  Ricardo::http::HttpConnectionPool::ptr pool(
      new Ricardo::http::HttpConnectionPool("www.dujiale.top", "", 80, 10,
                                            1000 * 30, 5));
  Ricardo::IOManager::GetThis()->addTimer(
      1000,
      [pool]() {
        auto r = pool->doGet("/", 300);
        ICEY_LOG_INFO(g_logger) << r->toString();
      },
      true);
}

void run() {
#if 0
  Ricardo::Address::ptr addr =
      Ricardo::Address::LookupAnyIPAddress("www.dujiale.top:80");
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
  // req->setPath("/blog/");
  req->setHeader("host", "www.dujiale.top");
  ICEY_LOG_INFO(g_logger) << "req: " << std::endl << *req;

  conn->sendRequest(req);
  auto rsp = conn->recvResponse();

  if (!rsp) {
    ICEY_LOG_ERROR(g_logger) << "recv response error";
    return;
  }
  ICEY_LOG_INFO(g_logger) << "rsp: " << std::endl << *rsp;
  std::ofstream ofs("rsp.dat");
  ofs << *rsp;

  ICEY_LOG_INFO(g_logger) << "========================";
  auto rs = Ricardo::http::HttpConnection::DoGet(
      "https://www.dujiale.top/?page_id=2", 300);
  ICEY_LOG_INFO(g_logger) << "result: " << rs->result << " error=" << rs->error
                          << " rsp="
                          << (rs->response ? rs->response->toString() : "");
#else
  test_pool();
#endif
}

int main(int argc, char** argv) {
  Ricardo::IOManager iom(2);
  iom.schedule(run);
  return 0;
}
