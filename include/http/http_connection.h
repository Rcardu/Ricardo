#pragma once
#include "http/http.h"
#include "socket_stream.h"

namespace Ricardo {
namespace http {
class HttpConnection : public SocketStream {
 public:
  typedef std::shared_ptr<HttpConnection> ptr;
  HttpConnection(Socket::ptr sock, bool owner = true);
  HttpResponse::ptr recvResponse();
  int sendRequest(HttpRequest::ptr rsp);
};

}  // namespace http
}  // namespace Ricardo
