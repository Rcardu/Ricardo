#pragma once
#include <ostream>
#include "singleton.h"
#include "stdhead.h"
#include "thread.h"

//使用logger写入日志级别为level的日志（流式日志）
#define ICEY_LOG_LEVEL(logger, level)                                   \
  if (logger->getLevel() <= level)                                      \
  Ricardo::LogEventWrap(                                                \
      Ricardo::LogEvent::ptr(new Ricardo::LogEvent(                     \
          logger, level, __FILE__, __LINE__, 0, Ricardo::GetThreadId(), \
          Ricardo::GetFiberId(), time(0), Ricardo::Thread::GetName()))) \
      .getSS()

//使用logger写入日志界别为debug的日志（流式日志）
#define ICEY_LOG_DEBUG(logger) ICEY_LOG_LEVEL(logger, Ricardo::LogLevel::DEBUG)
//使用logger写入日志界别为info的日志（流式日志）
#define ICEY_LOG_INFO(logger) ICEY_LOG_LEVEL(logger, Ricardo::LogLevel::INFO)
//使用logger写入日志界别为warn的日志（流式日志）
#define ICEY_LOG_WARN(logger) ICEY_LOG_LEVEL(logger, Ricardo::LogLevel::WARN)
//使用logger写入日志界别为error的日志（流式日志）
#define ICEY_LOG_ERROR(logger) ICEY_LOG_LEVEL(logger, Ricardo::LogLevel::ERROR)
//使用logger写入日志界别为fatal的日志（流式日志）
#define ICEY_LOG_FATAL(logger) YLAR_LOG_LEVEL(logger, Ricardo::LogLevel::FATAL)

#define ICEY_LOG_FMT_LEVEL(logger, level, fmt, ...)                     \
  if (logger->getLevel() <= level)                                      \
  Ricardo::LogEventWrap(                                                \
      Ricardo::LogEvent::ptr(new Ricardo::LogEvent(                     \
          logger, level, __FILE__, __LINE__, 0, Ricardo::GetThreadId(), \
          Ricardo::GetFiberId(), time(0), Ricardo::Thread::GetName()))) \
      .getEvent()                                                       \
      ->format(fmt, __VA_ARGS__)
//使用logger写入日志界别为debug的日志（格式化,printf）
#define ICEY_LOG_FMT_DEBUG(logger, fmt, ...) \
  ICEY_LOG_FMT_LEVEL(logger, Ricardo::LogLevel::DEBUG, fmt, __VA_ARGS__)
//使用logger写入日志界别为info的日志（格式化,printf）
#define ICEY_LOG_FMT_INFO(logger, fmt, ...) \
  ICEY_LOG_FMT_LEVEL(logger, Ricardo::LogLevel::INFO, fmt, __VA_ARGS__)
//使用logger写入日志界别为warn的日志（格式化,printf）
#define ICEY_LOG_FMT_WARN(logger, fmt, ...) \
  ICEY_LOG_FMT_LEVEL(logger, Ricardo::LogLevel::WARN, fmt, __VA_ARGS__)
//使用logger写入日志界别为error的日志（格式化,printf）
#define ICEY_LOG_FMT_ERROR(logger, fmt, ...) \
  ICEY_LOG_FMT_LEVEL(logger, Ricardo::LogLevel::ERROR, fmt, __VA_ARGS__)
//使用logger写入日志界别为fatal的日志（格式化,printf）
#define ICEY_LOG_FMT_FATAL(logger, fmt, ...) \
  ICEY_LOG_FMT_LEVEL(logger, Ricardo::LogLevel::FATAL, fmt, __VA_ARGS__)

#define ICEY_LOG_ROOT() Ricardo::LoggerMgr::GetInstance()->getRoot()
#define ICEY_LOG_NAME(name) Ricardo::LoggerMgr::GetInstance()->getLogger(name)

namespace Ricardo {

class Logger;
class LoggerManager;

//日志级别
class LogLevel {
 public:
  //日志级别
  enum Level {
    UNKNOW = 0,
    DEBUG = 1,
    INFO = 2,
    WARN = 3,
    ERROR = 4,
    FATAL = 5
  };

  static const char* ToString(LogLevel::Level level);
  static LogLevel::Level FormString(const std::string& str);
};

//日志事件
class LogEvent {
 public:
  typedef std::shared_ptr<LogEvent> ptr;
  LogEvent(std::shared_ptr<Logger> logger, LogLevel::Level level,
           const char* file, int32_t line, uint32_t elapse, uint32_t thread_id,
           uint32_t fiber_id, uint32_t time, const std::string& thread_name);

  const char* getFile() const { return m_file; }

  int32_t getLine() const { return m_line; }

  uint32_t getElapse() const { return m_elapse; }

  uint32_t getThreadId() const { return m_threadId; }

  uint32_t getFiberId() const { return m_fiberId; }

  uint32_t getTime() const { return m_time; }

  const std::string getThredName() const { return m_threadName; }

  std::string getContent() const { return m_ss.str(); }

  std::shared_ptr<Logger> getLogger() const { return m_logger; }

  LogLevel::Level getLevel() const { return m_level; }

  std::stringstream& getSS() { return m_ss; }

  void format(const char* fmt, ...);
  void format(const char* fmt, va_list al);

 private:
  const char* m_file = nullptr;  //文件名
  int32_t m_line = 0;            //行号
  int32_t m_elapse = 0;          //程序启动到现在的毫秒数
  int32_t m_threadId = 0;        //线程id
  uint32_t m_fiberId = 0;        //协程id
  uint64_t m_time = 0;           //时间戳
  std::string m_threadName;
  std::stringstream m_ss;

  std::shared_ptr<Logger> m_logger;
  LogLevel::Level m_level;
};

class LogEventWrap {
 public:
  LogEventWrap(LogEvent::ptr e);
  ~LogEventWrap();
  std::stringstream& getSS();

  LogEvent::ptr getEvent() const { return m_event; }

 private:
  LogEvent::ptr m_event;
};

//日志格式器
class LogFormatter {
 public:
  typedef std::shared_ptr<LogFormatter> ptr;
  LogFormatter(const std::string& pattern);

  //%t    %thread_id %m%n
  std::string format(std::shared_ptr<Logger> logger, LogLevel::Level level,
                     LogEvent::ptr event);
  std::ostream& format(std::ostream& ofs, std::shared_ptr<Logger> logger,
                       LogLevel::Level level, LogEvent::ptr event);

 public:
  class FormatItem {
   public:
    typedef std::shared_ptr<FormatItem> ptr;
    FormatItem(const std::string& fmt = ""){};

    virtual ~FormatItem() {}

    virtual void format(std::ostream& os, std::shared_ptr<Logger> logger,
                        LogLevel::Level level, LogEvent::ptr event) = 0;
  };

  void init();

  bool isError() const { return m_error; }

  const std::string getPattern() const { return m_pattern; }

 private:
  std::string m_pattern;
  std::vector<FormatItem::ptr> m_items;
  bool m_error = false;
};

//日志输出地
class LogAppender {
  friend class Logger;

 public:
  typedef std::shared_ptr<LogAppender> ptr;
  typedef Spinlock MutexType;
  virtual ~LogAppender(){};

  virtual void log(std::shared_ptr<Logger> logger, LogLevel::Level level,
                   LogEvent::ptr event) = 0;
  virtual std::string toYamlString() = 0;

  void setFormatter(LogFormatter::ptr val);

  LogFormatter::ptr getFormatter();

  LogLevel::Level getLevel() const { return m_level; }

  void setLevel(LogLevel::Level val) { m_level = val; }

 protected:
  LogLevel::Level m_level;
  bool m_hasFormatter = false;
  MutexType m_mutex;
  LogFormatter::ptr m_formatter;
};

//日志器
class Logger : public std::enable_shared_from_this<Logger> {
  friend class LoggerManager;

 public:
  typedef std::shared_ptr<Logger> ptr;
  typedef Spinlock MutexType;

  Logger(const std::string& name = "root");
  void log(LogLevel::Level level, LogEvent::ptr event);

  void debug(LogEvent::ptr event);
  void info(LogEvent::ptr event);
  void warn(LogEvent::ptr event);
  void error(LogEvent::ptr event);
  void fatal(LogEvent::ptr event);

  void addAppender(LogAppender::ptr appender);
  void delAppender(LogAppender::ptr adppender);
  void clearAppenders();

  LogLevel::Level getLevel() const { return m_level; }

  void setLevel(LogLevel::Level val) { m_level = val; }

  const std::string& getName() const { return m_name; }

  void setFormatter(LogFormatter::ptr val);
  void setFormatter(const std::string& val);
  LogFormatter::ptr getFormatter();

  std::string toYamlString();

 private:
  std::string m_name;       //日志名称
  LogLevel::Level m_level;  //日志级别
  MutexType m_mutex;
  std::list<LogAppender::ptr> m_appenders;  //Appender集合
  LogFormatter::ptr m_formatter;
  Logger::ptr m_root;
};

//输出到控制台的Appender
class StdoutLogAppender : public LogAppender {
 public:
  typedef std::shared_ptr<StdoutLogAppender> ptr;
  virtual void log(Logger::ptr logger, LogLevel::Level level,
                   LogEvent::ptr event) override;

  std::string toYamlString() override;

 private:
};

//输出到文件的Appender
class FileLogAppender : public LogAppender {
 public:
  typedef std::shared_ptr<FileLogAppender> ptr;
  FileLogAppender(const std::string& fileame);
  virtual void log(Logger::ptr logger, LogLevel::Level level,
                   LogEvent::ptr event) override;

  std::string toYamlString() override;
  //重新打开文件，文件打开成功返回True
  bool reopen();

 private:
  std::string m_filename;
  std::ofstream m_filestream;
  uint64_t m_lastTime = 0;
};

class LoggerManager {
 public:
  typedef Spinlock MutexType;
  LoggerManager();
  Logger::ptr getLogger(const std::string& name);

  void init();

  Logger::ptr getRoot() const { return m_root; }

  std::string toYamlString();

 private:
  MutexType m_mutex;
  std::map<std::string, Logger::ptr> m_loggers;
  Logger::ptr m_root;
};

typedef Ricardo::Singleton<LoggerManager> LoggerMgr;

}  // namespace Ricardo
