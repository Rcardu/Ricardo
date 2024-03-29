#include "log.h"

#include "config.h"

namespace Ricardo {

const char* LogLevel::ToString(LogLevel::Level level) {
  switch (level) {
#define XX(name)       \
  case LogLevel::name: \
    return #name;
    break;

    XX(DEBUG);
    XX(INFO);
    XX(WARN);
    XX(ERROR);
    XX(FATAL);
#undef XX
    default:
      return "UNKNOW";
  }
  return "UNKNOW";
}

LogLevel::Level LogLevel::FormString(const std::string& str) {
#define XX(level, v)        \
  if (str == #v) {          \
    return LogLevel::level; \
  }
  XX(DEBUG, debug);
  XX(INFO, info);
  XX(WARN, warn);
  XX(ERROR, error);
  XX(FATAL, fatal);

  XX(DEBUG, DEBUG);
  XX(INFO, INFO);
  XX(WARN, WARN);
  XX(ERROR, ERROR);
  XX(FATAL, FATAL);
  return LogLevel::UNKNOW;
#undef XX
}

LogEventWrap::LogEventWrap(LogEvent::ptr e) : m_event(e) {}

LogEventWrap::~LogEventWrap() {
  m_event->getLogger()->log(m_event->getLevel(), m_event);
}

void LogEvent::format(const char* fmt, ...) {
  va_list al;
  va_start(al, fmt);
  format(fmt, al);
  va_end(al);
}

void LogEvent::format(const char* fmt, va_list al) {
  char* buf = nullptr;
  int len = vasprintf(&buf, fmt, al);
  if (len != -1) {
    m_ss << std::string(buf, len);
    free(buf);
  }
}

std::stringstream& LogEventWrap::getSS() { return m_event->getSS(); }

void LogAppender::setFormatter(LogFormatter::ptr val) {
  MutexType::Lock lock(m_mutex);
  m_formatter = val;
  if (m_formatter) {
    m_hasFormatter = true;
  } else {
    m_hasFormatter = false;
  }
}

LogFormatter::ptr LogAppender::getFormatter() {
  MutexType::Lock lock(m_mutex);
  return m_formatter;
}

class MessageFormatItem : public LogFormatter::FormatItem {
 public:
  MessageFormatItem(const std::string& str = "") {}

  void format(std::ostream& os, std::shared_ptr<Logger> logger,
              LogLevel::Level level, LogEvent::ptr event) override {
    os << event->getContent();
  }
};

class LevelFormatItem : public LogFormatter::FormatItem {
 public:
  LevelFormatItem(const std::string& str = "") {}

  void format(std::ostream& os, std::shared_ptr<Logger> logger,
              LogLevel::Level level, LogEvent::ptr event) override {
    os << LogLevel::ToString(level);
  }
};

class ElapseFormatItem : public LogFormatter::FormatItem {
 public:
  ElapseFormatItem(const std::string& str = "") {}

  void format(std::ostream& os, std::shared_ptr<Logger> logger,
              LogLevel::Level level, LogEvent::ptr event) override {
    os << event->getElapse();
  }
};

class NameFormatItem : public LogFormatter::FormatItem {
 public:
  NameFormatItem(const std::string& str = "") {}

  void format(std::ostream& os, std::shared_ptr<Logger> logger,
              LogLevel::Level level, LogEvent::ptr event) override {
    os << event->getLogger()->getName();
  }
};

class ThreadIdFormatItem : public LogFormatter::FormatItem {
 public:
  ThreadIdFormatItem(const std::string& str = "") {}

  void format(std::ostream& os, std::shared_ptr<Logger> logger,
              LogLevel::Level level, LogEvent::ptr event) override {
    os << event->getThreadId();
  }
};

class FiberIdFormatItem : public LogFormatter::FormatItem {
 public:
  FiberIdFormatItem(const std::string& str = "") {}

  void format(std::ostream& os, std::shared_ptr<Logger> logger,
              LogLevel::Level level, LogEvent::ptr event) override {
    os << event->getFiberId();
  }
};

class ThreadNameFormatItem : public LogFormatter::FormatItem {
 public:
  ThreadNameFormatItem(const std::string& str = "") {}

  void format(std::ostream& os, std::shared_ptr<Logger> logger,
              LogLevel::Level level, LogEvent::ptr event) override {
    os << event->getThredName();
  }
};

class DateTimeFormatItem : public LogFormatter::FormatItem {
 public:
  DateTimeFormatItem(const std::string& format = "%Y-%m-%d %H:%M:%S")
      : m_format(format) {
    if (m_format.empty()) {
      m_format = "%Y-%m-%d %H:%M:%S";
    }
  }

  void format(std::ostream& os, std::shared_ptr<Logger> logger,
              LogLevel::Level level, LogEvent::ptr event) override {
    struct tm tm;
    time_t time = event->getTime();
    localtime_r(&time, &tm);
    char buf[64];
    strftime(buf, sizeof(buf), m_format.c_str(), &tm);
    os << buf;
  }

 private:
  std::string m_format;
};

class FilenameFormatItem : public LogFormatter::FormatItem {
 public:
  FilenameFormatItem(const std::string& str = "") {}

  void format(std::ostream& os, std::shared_ptr<Logger> logger,
              LogLevel::Level level, LogEvent::ptr event) override {
    os << event->getFile();
  }
};

class LineFormatItem : public LogFormatter::FormatItem {
 public:
  LineFormatItem(const std::string& str = "") {}

  void format(std::ostream& os, std::shared_ptr<Logger> logger,
              LogLevel::Level level, LogEvent::ptr event) override {
    os << event->getLine();
  }
};

class NewLineFormatItem : public LogFormatter::FormatItem {
 public:
  NewLineFormatItem(const std::string& str = "") {}

  void format(std::ostream& os, std::shared_ptr<Logger> logger,
              LogLevel::Level level, LogEvent::ptr event) override {
    os << std::endl;
  }
};

class StringFormatItem : public LogFormatter::FormatItem {
 public:
  StringFormatItem(const std::string& str) : FormatItem(str), m_string(str) {}

  void format(std::ostream& os, std::shared_ptr<Logger> logger,
              LogLevel::Level level, LogEvent::ptr event) override {
    os << m_string;
  }

 private:
  std::string m_string;
};

class TabFormatItem : public LogFormatter::FormatItem {
 public:
  TabFormatItem(const std::string& str = "") {}

  void format(std::ostream& os, std::shared_ptr<Logger> logger,
              LogLevel::Level level, LogEvent::ptr event) override {
    os << "\t";
  }

 private:
  std::string m_string;
};

LogEvent::LogEvent(std::shared_ptr<Logger> logger, LogLevel::Level level,
                   const char* file, int32_t line, uint32_t elapse,
                   uint32_t thread_id, uint32_t fiber_id, uint32_t time,
                   const std::string& thread_name)
    : m_file(file),
      m_line(line),
      m_elapse(elapse),
      m_threadId(thread_id),
      m_fiberId(fiber_id),
      m_time(time),
      m_threadName(thread_name),
      m_logger(logger),
      m_level(level) {}

Logger::Logger(const std::string& name)
    : m_name(name), m_level(LogLevel::DEBUG) {
  // 输出格式
  // 年-月-日 时:分:秒   线程号  [日志等级]  [日志名称]    文件:行号 消息体换行
  m_formatter.reset(new LogFormatter(
      "%d{%Y-%m-%d %H:%M:%S}%T%t%T%N%T%F%T[%p]%T[%c]%T%f:%l%T%m%n"));
}

std::string Logger::toYamlString() {
  MutexType::Lock lock(m_mutex);
  YAML::Node node;
  node["name"] = m_name;
  if (m_level != LogLevel::UNKNOW) {
    node["level"] = LogLevel::ToString(m_level);
  }
  if (m_formatter) {
    node["formatter"] = m_formatter->getPattern();
  }
  for (auto& i : m_appenders) {
    node["appenders"].push_back(YAML::Load(i->toYamlString()));
  }
  std::stringstream ss;
  ss << node;
  // std::cout<<"Logger:  "<<ss.str()<<std::endl;
  return ss.str();
}

void Logger::setFormatter(LogFormatter::ptr val) {
  MutexType::Lock lock(m_mutex);
  m_formatter = val;

  for (auto& i : m_appenders) {
    MutexType::Lock ll(i->m_mutex);
    if (!i->m_hasFormatter) {
      i->m_formatter = m_formatter;
    }
  }
}

void Logger::setFormatter(const std::string& val) {
  Ricardo::LogFormatter::ptr new_val(new Ricardo::LogFormatter(val));
  if (new_val->isError()) {
    std::cout << "Logger setFormatter name = " << m_name << " value = " << val
              << "invalid formatter" << std::endl;
    return;
  }
  // m_formatter = new_val;
  setFormatter(new_val);
}

LogFormatter::ptr Logger::getFormatter() {
  MutexType::Lock lock(m_mutex);
  return m_formatter;
}

void Logger::addAppender(LogAppender::ptr appender) {
  MutexType::Lock lock(m_mutex);
  if (!appender->getFormatter()) {
    MutexType::Lock ll(appender->m_mutex);
    appender->m_formatter = m_formatter;
  }
  m_appenders.push_back(appender);
}

void Logger::delAppender(LogAppender::ptr appender) {
  MutexType::Lock lock(m_mutex);
  for (auto it = m_appenders.begin(); it != m_appenders.end(); ++it) {
    if (*it == appender) {
      m_appenders.erase(it);
      break;
    }
  }
}

void Logger::clearAppenders() {
  MutexType::Lock lock(m_mutex);
  m_appenders.clear();
}

void Logger::log(LogLevel::Level level, LogEvent::ptr event) {
  if (level >= m_level) {
    auto self = shared_from_this();
    MutexType::Lock lock(m_mutex);
    // 如果m_appender不为空就输出自己的appender，否则输出root的appender
    if (!m_appenders.empty()) {
      for (auto& i : m_appenders) {
        i->log(self, level, event);
      }
    } else if (m_root) {
      m_root->log(level, event);
    }
  }
}

void Logger::debug(LogEvent::ptr event) { log(LogLevel::DEBUG, event); }

void Logger::info(LogEvent::ptr event) { log(LogLevel::INFO, event); }

void Logger::warn(LogEvent::ptr event) { log(LogLevel::WARN, event); }

void Logger::error(LogEvent::ptr event) { log(LogLevel::ERROR, event); }

void Logger::fatal(LogEvent::ptr event) { log(LogLevel::FATAL, event); }

FileLogAppender::FileLogAppender(const std::string& filename)
    : m_filename(filename) {
  reopen();
}

void FileLogAppender::log(std::shared_ptr<Logger> logger, LogLevel::Level level,
                          LogEvent::ptr event) {
  if (level >= m_level) {
    uint64_t now = event->getTime();
    if (now >= (m_lastTime + 3)) {
      reopen();
      m_lastTime = now;
    }
    MutexType::Lock lock(m_mutex);
    // if (!(m_filestream << m_formatter->format(logger, level, event))) {
    if (!m_formatter->format(m_filestream, logger, level, event)) {
      std::cout << "error" << std::endl;
    }
  }
}

std::string FileLogAppender::toYamlString() {
  MutexType::Lock lock(m_mutex);
  YAML::Node node;
  node["type"] = "FileLogAppender";
  node["file"] = m_filename;
  if (m_level != LogLevel::UNKNOW) {
    node["level"] = LogLevel::ToString(m_level);
  }
  if (m_hasFormatter && m_formatter) {
    node["formatter"] = m_formatter->getPattern();
  }
  std::stringstream ss;
  ss << node;
  return ss.str();
}

bool FileLogAppender::reopen() {
  MutexType::Lock lock(m_mutex);
  if (m_filestream) m_filestream.close();

  m_filestream.open(m_filename);
  return !!m_filestream;
}

void StdoutLogAppender::log(std::shared_ptr<Logger> logger,
                            LogLevel::Level level, LogEvent::ptr event) {
  if (level >= m_level) {
    MutexType::Lock lock(m_mutex);
    m_formatter->format(std::cout, logger, level, event);
  }
  return;
}

std::string StdoutLogAppender::toYamlString() {
  MutexType::Lock lock(m_mutex);
  YAML::Node node;
  node["type"] = "StdoutLogAppender";
  if (m_level != LogLevel::UNKNOW) {
    node["level"] = LogLevel::ToString(m_level);
  }
  if (m_hasFormatter && m_formatter) {
    node["formatter"] = m_formatter->getPattern();
  }
  std::stringstream ss;
  ss << node;
  // std::cout<<"Stdout:  "<<ss.str()<<std::endl;
  return ss.str();
}

LogFormatter::LogFormatter(const std::string& pattern) : m_pattern(pattern) {
  init();
}

std::string LogFormatter::format(std::shared_ptr<Logger> logger,
                                 LogLevel::Level level, LogEvent::ptr event) {
  std::stringstream ss;
  for (auto& i : m_items) {
    i->format(ss, logger, level, event);
  }
  return ss.str();
}

std::ostream& LogFormatter::format(std::ostream& ofs,
                                   std::shared_ptr<Logger> logger,
                                   LogLevel::Level level, LogEvent::ptr event) {
  for (auto& i : m_items) {
    i->format(ofs, logger, level, event);
  }
  return ofs;
}

// 解析此日志
//%xxx %xxx{xxx} %%
void LogFormatter::init() {
  std::vector<std::tuple<std::string, std::string, int>> vec;
  size_t last_pos = 0;
  std::string nstr;
  for (size_t i = 0; i < m_pattern.size(); i++) {
    if (m_pattern[i] != '%') {
      nstr.append(1, m_pattern[i]);
      continue;
    }

    if ((i + 1) < m_pattern.size()) {
      if (m_pattern[i + 1] == '%') {
        nstr.append(1, '%');
        continue;
      }
    }

    size_t n = i + 1;
    // 设置解析状态为0
    int fmt_status = 0;
    size_t fmt_begin = 0;

    std::string str;
    std::string fmt;
    while (n < m_pattern.size()) {
      // 如果是空格，说明当前部分解析完毕，退出while
      if (!fmt_status && (!isalpha(m_pattern[n]) && m_pattern[n] != '{' &&
                          m_pattern[n] != '}')) {
        str = m_pattern.substr(i + 1, n - i - 1);
        break;
      }

      if (fmt_status == 0) {
        if (m_pattern[n] == '{') {
          str = m_pattern.substr(i + 1, n - i - 1);
          // std::cout<<"*"<<str<<std::endl;
          fmt_status = 1;  // 解析格式
          fmt_begin = n;
          n++;
          continue;
        }
      }
      if (fmt_status == 1) {
        if (m_pattern[n] == '}') {
          fmt = m_pattern.substr(fmt_begin + 1, n - fmt_begin - 1);
          // std::cout<<"#"<<fmt<<std::endl;
          fmt_status = 0;
          n++;
          break;
        }
      }
      n++;
      if (n == m_pattern.size()) {
        if (str.empty()) {
          str = m_pattern.substr(i + 1);
        }
      }
    }
    if (fmt_status == 0) {
      if (!nstr.empty()) {
        vec.push_back(std::make_tuple(nstr, std::string(), 0));
        nstr.clear();
      }
      vec.push_back(std::make_tuple(str, fmt, 1));
      i = n - 1;
    } else if (fmt_status == 1) {
      std::cout << "Pattern parse error: " << m_pattern << " - "
                << m_pattern.substr(i) << std::endl;
      m_error = true;
      vec.push_back(std::make_tuple("<<pattren_error>", fmt, 0));
    }
  }
  if (!nstr.empty()) {
    vec.push_back(std::make_tuple(nstr, "", 0));
  }
  //%m -- 消息体
  //%p -- level
  //%r -- 启动后的时间
  //%c --日志名称
  //%t -- 线程ID
  //%n -- 回车换行
  //%d -- 时间
  //%f -- 文件名
  //%l -- 行号
  static std::map<std::string,
                  std::function<FormatItem::ptr(const std::string& str)>>
      s_format_tiems = {
#define XX(str, C)                                                           \
  {                                                                          \
    #str, [](const std::string& fmt) { return FormatItem::ptr(new C(fmt)); } \
  }
          XX(m, MessageFormatItem),
          XX(p, LevelFormatItem),  // m:消息、          p:日志级别
          XX(r, ElapseFormatItem),
          XX(c, NameFormatItem),  // r:累积毫秒数、    c:日志名称
          XX(t, ThreadIdFormatItem),
          XX(n, NewLineFormatItem),  // t:线程Id、        n:换行
          XX(d, DateTimeFormatItem),
          XX(f, FilenameFormatItem),  // d:时间、          f:文件名
          XX(l, LineFormatItem),
          XX(T, TabFormatItem),  // l:行号、          T:制表符(Tab)
          XX(F, FiberIdFormatItem),
          XX(N, ThreadNameFormatItem),  // F:协程Id、        N:线程名称
#undef XX
      };
  for (auto& i : vec) {
    if (std::get<2>(i) == 0) {
      m_items.push_back(FormatItem::ptr(new StringFormatItem(std::get<0>(i))));
    } else {
      auto it = s_format_tiems.find(std::get<0>(i));
      if (it == s_format_tiems.end()) {
        m_items.push_back(FormatItem::ptr(
            new StringFormatItem("<<error_format %" + std::get<0>(i) + ">>")));
        m_error = true;
      } else {
        m_items.push_back(it->second(std::get<1>(i)));
      }
    }
    // std::cout<<"{"<<std::get<0>(i)<<"} - {"<<std::get<1>(i)<<"} -
    // {"<<std::get<2>(i)<<"}"<<std::endl;
  }
  // std::cout<<m_items.size()<<std::endl;
}

LoggerManager::LoggerManager() {
  m_root.reset(new Logger);

  m_root->addAppender(LogAppender::ptr(new StdoutLogAppender));

  m_loggers[m_root->m_name] = m_root;

  init();
}

// 获取当前日志指针
Logger::ptr LoggerManager::getLogger(const std::string& name) {
  MutexType::Lock lock(m_mutex);
  // 查找此日志是否存在
  auto it = m_loggers.find(name);
  // 存在就返回此日志的Logger指针
  if (it != m_loggers.end()) {
    return it->second;
  }

  // 不存在就创建一个新的名为name的日志
  Logger::ptr logger(new Logger(name));
  // 使用root的appender初始化当前日志的appender
  logger->m_root = m_root;
  // 添加到日志管理Map中
  m_loggers[name] = logger;
  return logger;
}

struct LogAppenderDefine {
  int type = 0;  // 1 File, 2 Stdout
  LogLevel::Level level = LogLevel::UNKNOW;
  std::string formatter;
  std::string file;

  bool operator==(const LogAppenderDefine& oth) const {
    return type == oth.type && level == oth.level &&
           formatter == oth.formatter && file == oth.file;
  }
};

struct LogDefine {
  std::string name;
  LogLevel::Level level = LogLevel::UNKNOW;
  std::string formatter;
  std::vector<LogAppenderDefine> appenders;

  bool operator==(const LogDefine& oth) const {
    return name == oth.name && level == oth.level &&
           formatter == oth.formatter && appenders == oth.appenders;
  }

  bool operator<(const LogDefine& oth) const { return name < oth.name; }
};

// 从字符串转为日志
template <>
class LexicalCast<std::string, std::set<LogDefine>> {
 public:
  std::set<LogDefine> operator()(const std::string& v) const {
    YAML::Node node = YAML::Load(v);
    std::set<LogDefine> vec;
    // node["name"].IsDefined()
    for (size_t i = 0; i < node.size(); i++) {
      auto n = node[i];
      if (!n["name"].IsDefined()) {
        std::cout << "log config error: name is null, " << n << std::endl;
        continue;
      }
      LogDefine ld;
      ld.name = n["name"].as<std::string>();
      ld.level = LogLevel::FormString(
          n["level"].IsDefined() ? n["level"].as<std::string>() : "");
      if (n["formatter"].IsDefined()) {
        ld.formatter = n["formatter"].as<std::string>();
      }

      if (n["appenders"].IsDefined()) {
        for (size_t x = 0; x < n["appenders"].size(); x++) {
          auto a = n["appenders"][x];
          if (!a["type"].IsDefined()) {
            std::cout << "log config error: appender type is null, " << a
                      << std::endl;
            continue;
          }
          std::string type = a["type"].as<std::string>();
          LogAppenderDefine lad;
          if (type == "FileLogAppender") {
            lad.type = 1;
            if (!a["file"].IsDefined()) {
              std::cout << "log config error: fileappender type is null, " << a
                        << std::endl;
              continue;
            }
            lad.file = a["file"].as<std::string>();
            if (a["formatter"].IsDefined()) {
              lad.formatter = a["formatter"].as<std::string>();
            }
          } else if (type == "StdoutLogAppender") {
            lad.type = 2;
          } else {
            std::cout << "log config error: appender type is invalid, " << a
                      << std::endl;
            continue;
          }
          ld.appenders.push_back(lad);
        }
      }
      vec.insert(ld);
    }
    return vec;
  }
};

// 从日志转为字符串
template <>
class LexicalCast<std::set<LogDefine>, std::string> {
 public:
  std::string operator()(const std::set<LogDefine>& v) {
    YAML::Node node;
    for (auto& i : v) {
      YAML::Node n;
      n["name"] = i.name;
      if (i.level != LogLevel::UNKNOW) {
        n["level"] = LogLevel::ToString(i.level);
      }
      if (i.formatter.empty()) {
        n["formatter"] = i.formatter;
      }

      for (auto& a : i.appenders) {
        YAML::Node na;
        if (a.type == 1) {
          na["type"] = "FileLogAppender";
          na["file"] = a.file;
        } else if (a.type == 2) {
          na["type"] = "StdoutLogAppender";
        }
        if (a.level != LogLevel::UNKNOW) {
          na["level"] = LogLevel::ToString(a.level);
        }
        if (!a.formatter.empty()) {
          na["formatter"] = a.formatter;
        }

        n["appenders"].push_back(na);
      }
      node.push_back(n);
    }
    std::stringstream ss;
    ss << node;
    return ss.str();
  }
};

// 设置日志信息指针
Ricardo::ConfigVar<std::set<LogDefine>>::ptr g_log_defines =
    Ricardo::Config::Lookup("logs", std::set<LogDefine>(), "logs config");

// 添加日志监听事件
struct LogIniter {
  LogIniter() {
    g_log_defines->addListener([](const std::set<LogDefine>& old_value,
                                  const std::set<LogDefine>& new_value) {
      ICEY_LOG_INFO(ICEY_LOG_ROOT()) << "on_logger_conf_changed";
      for (auto& i : new_value) {
        auto it = old_value.find(i);
        Ricardo::Logger::ptr logger;
        // 更新日志
        if (it == old_value.end()) {
          // 新增logger
          logger = ICEY_LOG_NAME(i.name);
        } else {
          if (!(i == *it)) {
            // 修改的logger
            logger = ICEY_LOG_NAME(i.name);
          } else
            continue;
        }

        logger->setLevel(i.level);
        if (!i.formatter.empty()) {
          logger->setFormatter(i.formatter);
        }
        logger->clearAppenders();
        for (auto& a : i.appenders) {
          Ricardo::LogAppender::ptr ap;
          if (a.type == 1) {
            ap.reset(new FileLogAppender(a.file));
          } else if (a.type == 2) {
            ap.reset(new StdoutLogAppender);
          }
          ap->setLevel(a.level);
          if (!a.formatter.empty()) {
            LogFormatter::ptr fmt(new LogFormatter(a.formatter));
            if (!fmt->isError()) {
              ap->setFormatter(fmt);
            } else {
              std::cout << "log.name = " << i.name
                        << " appender type = " << a.type
                        << " formatter = " << a.formatter << " is invalid"
                        << std::endl;
            }
          }
          logger->addAppender(ap);
        }
      }
      for (auto& i : old_value) {
        auto it = new_value.find(i);
        if (it == new_value.end()) {
          // 删除logger
          auto logger = ICEY_LOG_NAME(i.name);
          logger->setLevel((LogLevel::Level)100);
          logger->clearAppenders();
        }
      }
      // 删除
    });
  }
};

static LogIniter __log_init;

// 转化日志为输出格式
std::string LoggerManager::toYamlString() {
  MutexType::Lock lock(m_mutex);
  YAML::Node node;
  for (auto& i : m_loggers) {
    node.push_back(YAML::Load(i.second->toYamlString()));
  }
  std::stringstream ss;
  ss << node;
  return ss.str();
}

void LoggerManager::init() {}
}  // namespace Ricardo
