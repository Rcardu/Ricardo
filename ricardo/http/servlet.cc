#include "servlet.h"

#include "log.h"
#include "util.h"

static Ricardo::Logger::ptr g_logger = ICEY_LOG_NAME("system");
namespace Ricardo {
namespace http {
FunctionServlet::FunctionServlet(callback cb)
    : Servlet("FunctionServlet"), m_cb(cb) {}
int32_t FunctionServlet::handle(Ricardo::http::HttpRequest::ptr request,
                                Ricardo::http::HttpResponse::ptr response,
                                Ricardo::http::HttpSession::ptr session) {
  return m_cb(request, response, session);
}
ServletDispatch::ServletDispatch() : Servlet("ServletDispatch") {
  m_default.reset(new NotFoundServlet());
}
int32_t ServletDispatch::handle(Ricardo::http::HttpRequest::ptr request,
                                Ricardo::http::HttpResponse::ptr response,
                                Ricardo::http::HttpSession::ptr session) {
  auto slt = getMatcheServlet(request->getPath());
  if (slt) {
    slt->handle(request, response, session);
  }
  return 0;
}

void ServletDispatch::addServlet(const std::string& uri, Servlet::ptr slt) {
  RWMutexType::WriteLock wrlock(m_mutex);
  m_datas[uri] = slt;
}
void ServletDispatch::addServlet(const std::string& uri,
                                 FunctionServlet::callback cb) {
  RWMutexType::WriteLock wrlock(m_mutex);
  m_datas[uri].reset(new FunctionServlet(cb));
}
void ServletDispatch::addGlobServlet(const std::string& uri, Servlet::ptr slt) {
  RWMutexType::WriteLock wrlock(m_mutex);
  for (auto it = m_globs.begin(); it != m_globs.end(); ++it) {
    if (it->first == uri) {
      m_globs.erase(it);
      break;
    }
  }
  m_globs.push_back(std::make_pair(uri, slt));
}
void ServletDispatch::addGlobServlet(const std::string& uri,
                                     FunctionServlet::callback cb) {
  return addGlobServlet(uri, FunctionServlet::ptr(new FunctionServlet(cb)));
}
void ServletDispatch::delServlet(const std::string& uri) {
  RWMutexType::WriteLock wrlock(m_mutex);
  m_datas.erase(uri);
}
void ServletDispatch::delGlobServlet(const std::string& uri) {
  RWMutexType::WriteLock wrlock(m_mutex);
  for (auto it = m_globs.begin(); it != m_globs.end(); ++it) {
    if (it->first == uri) {
      m_globs.erase(it);
      break;
    }
  }
}

Servlet::ptr ServletDispatch::getServlet(const std::string& uri) {
  RWMutexType::ReadLock rdlock(m_mutex);
  auto it = m_datas.find(uri);
  return it == m_datas.end() ? nullptr : it->second;
}
Servlet::ptr ServletDispatch::getGlobServlet(const std::string& uri) {
  RWMutexType::ReadLock rdlock(m_mutex);
  for (auto it = m_globs.begin(); it != m_globs.end(); ++it) {
    if (it->first == uri) {
      return it->second;
    }
  }
  return nullptr;
}
Servlet::ptr ServletDispatch::getMatcheServlet(const std::string& uri) {
  RWMutexType::ReadLock rdlock(m_mutex);
  auto mit = m_datas.find(uri);
  if (mit != m_datas.end()) {
    return mit->second;
  }
  for (auto it = m_globs.begin(); it != m_globs.end(); ++it) {
    ICEY_LOG_DEBUG(g_logger)
        << "it->first.c_str(): " << it->first.c_str() << std::endl
        << "uri.c_str(): " << uri.c_str();
    if (!fnmatch(it->first.c_str(), uri.c_str(), 0)) {
      ICEY_LOG_DEBUG(g_logger) << "Begin Go";
      return it->second;
    }
  }
  return m_default;
}
NotFoundServlet::NotFoundServlet() : Servlet("NotFoundServlet") {}
int32_t NotFoundServlet::handle(Ricardo::http::HttpRequest::ptr request,
                                Ricardo::http::HttpResponse::ptr response,
                                Ricardo::http::HttpSession::ptr session) {
  // static const std::string& RSP_BODY =
  //     R"(<html><head><title> 404 Not Found</title></head><body><center>
  //     <hl>404 Not Found</ hl></ center><hr><center> nginx / 1.16.0 < / center
  //     > < / body > < html > )";
  static const std::string& RSP_BODY =
      "<html><head><title> 404 Not Found"
      "</title></head><body><center><hl>404 Not Found</hl></center>"
      "<hr><center>icey/1.0.0</center></body><html>";
  response->setStatus(Ricardo::http::HttpStatus::NOT_FOUND);
  response->setHeader("Server", "icey/1.0.0");
  response->setHeader("Content-Type", "text / html");
  response->setBody(RSP_BODY);
  return 0;
}

}  // namespace http
}  // namespace Ricardo
