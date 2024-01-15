#include <pthread.h>

#include "http/http.h"
#include "http/http_parser.h"
#include "log.h"
#include "util.h"

static Ricardo::Logger::ptr g_logger = ICEY_LOG_ROOT();

const char test_request_data[] =
    "GET / HTTP/1.1\r\n"
    "Host: www.baidu.com\r\n"
    "Content-Length: 10\r\n\r\n"
    "1234567890";

void test_request() {
  Ricardo::http::HttpRequestParser parser;
  std::string tmp = test_request_data;
  size_t s = parser.execute(&tmp[0], tmp.size());
  ICEY_LOG_ERROR(g_logger) << "execute rt=" << s
                           << " has_error=" << parser.hasError()
                           << " is_finished=" << parser.isFinished()
                           << " total=" << tmp.size()
                           << " content-length=" << parser.getContentLength();
  tmp.resize(tmp.size() - s);
  ICEY_LOG_INFO(g_logger) << parser.getData()->toString();
  ICEY_LOG_INFO(g_logger) << tmp;
}

const char test_response_data[] =
    "HTTP/1.1 200 OK\r\n"
    "Date: Fri, 29 Dec 2023 08:07:02 GMT\r\n"
    "Server: Apache\r\n"
    "Last-Modified: Tue, 12 Jan 2010 13:48:00 GMT\r\n"
    "ETag: \"51-47cf7e6ee8400\"\r\n"
    "Accept-Ranges: bytes\r\n"
    "Content-Length: 81\r\n"
    "Cache-Control: max-age=86400\r\n"
    "Expires: Sat, 30 Dec 2023 08:07:02 GMT\r\n"
    "Connection: Keep-Alive\r\n"
    "Content-Type: text/html\r\n\r\n"
    "<html>\r\n"
    "<meta http-equiv=\"refresh\" content=\"0;url=http://www.baidu.com/\">\r\n"
    "</html>\r\n";

const char test_response_data1[] = R"(HTTP/1.1 200 OK
Date: Fri, 29 Dec 2023 08:07:02 GMT
Server: Apache
Last-Modified: Tue, 12 Jan 2010 13:48:00 GMT
ETag: "51-47cf7e6ee8400"
Accept-Ranges: bytes
Content-Length: 81
Cache-Control: max-age=86400
Expires: Sat, 30 Dec 2023 08:07:02 GMT
Connection: Keep-Alive
Content-Type: text/html
<html>
<meta http-equiv="refresh" content="0;url=http://www.baidu.com/">
</html>")";
void test_response() {
  Ricardo::http::HttpResponseParser parser;
  std::string tmp = test_response_data1;
  size_t s = parser.execute(&tmp[0], tmp.size(), true);
  ICEY_LOG_ERROR(g_logger) << "execute rt=" << s
                           << " has_error=" << parser.hasError()
                           << " is_finished=" << parser.isFinished()
                           << " total=" << tmp.size()
                           << " content_length=" << parser.getContentLength()
                           << " tmp[s]= " << tmp[s];
  tmp.resize(tmp.size() - s);
  ICEY_LOG_INFO(g_logger) << parser.getData()->toString();
  ICEY_LOG_INFO(g_logger) << tmp;
}

int main() {
  test_request();
  ICEY_LOG_INFO(g_logger) << "-------------------------------";
  test_response();
  return 0;
}
