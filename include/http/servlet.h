#pragma noce
#include "http.h"
#include "http_session.h"
#include "stdhead.h"
#include "thread.h"

namespace Ricardo {
namespace http {

class Servlet {
 public:
  typedef std::shared_ptr<Servlet> ptr;
  Servlet(const std::string& name) : m_name(name) {}
  virtual ~Servlet() {}
  virtual int32_t handle(Ricardo::http::HttpRequest::ptr request,
                         Ricardo::http::HttpResponse::ptr response,
                         Ricardo::http::HttpSession::ptr session) = 0;
  const std::string& getName() const { return m_name; }

 protected:
  std::string m_name;
};

class FunctionServlet : public Servlet {
 public:
  typedef std::shared_ptr<FunctionServlet> ptr;
  typedef std::function<int32_t(Ricardo::http::HttpRequest::ptr request,
                                Ricardo::http::HttpResponse::ptr response,
                                Ricardo::http::HttpSession::ptr session)>
      callback;
  FunctionServlet(callback cb);
  virtual int32_t handle(Ricardo::http::HttpRequest::ptr request,
                         Ricardo::http::HttpResponse::ptr response,
                         Ricardo::http::HttpSession::ptr session) override;

 private:
  callback m_cb;
};

class ServletDispatch : public Servlet {
 public:
  typedef std::shared_ptr<ServletDispatch> ptr;
  typedef RWMutex RWMutexType;

  ServletDispatch();
  virtual int32_t handle(Ricardo::http::HttpRequest::ptr request,
                         Ricardo::http::HttpResponse::ptr response,
                         Ricardo::http::HttpSession::ptr session) override;

  void addServlet(const std::string& uri, Servlet::ptr slt);
  void addServlet(const std::string& uri, FunctionServlet::callback cb);
  void addGlobServlet(const std::string& uri, Servlet::ptr slt);
  void addGlobServlet(const std::string& uri, FunctionServlet::callback cb);

  void delServlet(const std::string& uri);
  void delGlobServlet(const std::string& uri);

  Servlet::ptr getDefault() const { return m_default; }
  void setDefault(Servlet::ptr v) { m_default = v; }

  Servlet::ptr getServlet(const std::string& uri);
  Servlet::ptr getGlobServlet(const std::string& uri);

  Servlet::ptr getMatcheServlet(const std::string& uri);

 private:
  RWMutexType m_mutex;
  // uri(/Ricardo/xxx) -> servlet
  std::unordered_map<std::string, Servlet::ptr> m_datas;
  // uri(Ricardo/*)-> servlet
  std::vector<std::pair<std::string, Servlet::ptr>> m_globs;
  // 默认servlet, 所有路径都没有匹配到时使用
  Servlet::ptr m_default;
};

class NotFoundServlet : public Servlet {
 public:
  typedef std::shared_ptr<NotFoundServlet> ptr;
  NotFoundServlet();
  virtual int32_t handle(Ricardo::http::HttpRequest::ptr request,
                         Ricardo::http::HttpResponse::ptr response,
                         Ricardo::http::HttpSession::ptr session) override;
};
}  // namespace http
}  // namespace Ricardo
