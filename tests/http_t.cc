#include <sys/ucontext.h>

#include "http/http.h"
#include "log.h"

static Ricardo::Logger::ptr g_logger = ICEY_LOG_ROOT();
void test_requset() {
  Ricardo::http::HttpRequest::ptr req(new Ricardo::http::HttpRequest);
  req->setHeader("host", "www.baidu.com");
  req->setBody("hello Ricardo");

  req->dump(std::cout) << std::endl;
}
void test_response() {
  Ricardo::http::HttpResponse::ptr rsp(new Ricardo::http::HttpResponse);
  rsp->setHeader("X-X", "Ricardo");
  rsp->setBody("hello Ricardo");
  rsp->setStatus((Ricardo::http::HttpStatus)400);
  rsp->setClose(false);

  rsp->dump(std::cout) << std::endl;
}
int main() {
  test_requset();
  test_response();
  return 0;
}
