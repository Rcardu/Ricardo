#include "http_server.h"

static Ricardo::Logger::ptr g_logger = ICEY_LOG_ROOT();

void run() {
  Ricardo::http::HttpServer::ptr server(new Ricardo::http::HttpServer);
  Ricardo::Address::ptr addr =
      Ricardo::Address::LookupAnyIPAddress("0.0.0.0:8020");
  while (!server->bind(addr)) {
    sleep(2);
  }
  server->start();
}

int main(int argc, char** argv) {
  Ricardo::IOManager iom(2);
  iom.schedule(run);
  return 0;
}
