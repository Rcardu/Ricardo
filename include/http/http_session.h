#pragma once
#include "http/http.h"
#include "socket_stream.h"

namespace Ricardo {
namespace http {
class HttpSession : public SocketStream {
 public:
  typedef std::shared_ptr<HttpSession> ptr;
  HttpSession(Socket::ptr sock, bool owner = true);
  HttpRequest::ptr recvRequest();
  int sendResponse(HttpResponse::ptr rsp);
};

}  // namespace http
}  // namespace Ricardo
