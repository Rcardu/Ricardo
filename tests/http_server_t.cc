#include "http_server.h"

static Ricardo::Logger::ptr g_logger = ICEY_LOG_ROOT();

void run() {
  Ricardo::http::HttpServer::ptr server(new Ricardo::http::HttpServer);
  Ricardo::Address::ptr addr =
      Ricardo::Address::LookupAnyIPAddress("0.0.0.0:8020");
  while (!server->bind(addr)) {
    sleep(2);
  }
  auto sd = server->getServletDispatch();
  sd->addServlet("/Ricardo/xx", [](Ricardo::http::HttpRequest::ptr req,
                                   Ricardo::http::HttpResponse::ptr rsp,
                                   Ricardo::http::HttpSession::ptr session) {
    rsp->setBody(req->toString());
    return 0;
  });
  sd->addServlet("/Ricardo/*", [](Ricardo::http::HttpRequest::ptr req,
                                  Ricardo::http::HttpResponse::ptr rsp,
                                  Ricardo::http::HttpSession::ptr session) {
    rsp->setBody("Glob:\r\n" + req->toString());
    return 0;
  });
  server->start();
}

int main(int argc, char** argv) {
  Ricardo::IOManager iom(2);
  iom.schedule(run);
  return 0;
}
