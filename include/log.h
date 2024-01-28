#pragma once
#include <ostream>

#include "singleton.h"
#include "stdhead.h"
#include "thread.h"

// 使用logger写入日志级别为level的日志（流式日志）
#define ICEY_LOG_LEVEL(logger, level)                                   \
  if (logger->getLevel() <= level)                                      \
  Ricardo::LogEventWrap(                                                \
      Ricardo::LogEvent::ptr(new Ricardo::LogEvent(                     \
          logger, level, __FILE__, __LINE__, 0, Ricardo::GetThreadId(), \
          Ricardo::GetFiberId(), time(0), Ricardo::Thread::GetName()))) \
      .getSS()

// 使用logger写入日志级别为debug的日志（流式日志）
#define ICEY_LOG_DEBUG(logger) ICEY_LOG_LEVEL(logger, Ricardo::LogLevel::DEBUG)
// 使用logger写入日志级别为info的日志（流式日志）
#define ICEY_LOG_INFO(logger) ICEY_LOG_LEVEL(logger, Ricardo::LogLevel::INFO)
// 使用logger写入日志级别为warn的日志（流式日志）
#define ICEY_LOG_WARN(logger) ICEY_LOG_LEVEL(logger, Ricardo::LogLevel::WARN)
// 使用logger写入日志级别为error的日志（流式日志）
#define ICEY_LOG_ERROR(logger) ICEY_LOG_LEVEL(logger, Ricardo::LogLevel::ERROR)
// 使用logger写入日志级别为fatal的日志（流式日志）
#define ICEY_LOG_FATAL(logger) YLAR_LOG_LEVEL(logger, Ricardo::LogLevel::FATAL)

#define ICEY_LOG_FMT_LEVEL(logger, level, fmt, ...)                     \
  if (logger->getLevel() <= level)                                      \
  Ricardo::LogEventWrap(                                                \
      Ricardo::LogEvent::ptr(new Ricardo::LogEvent(                     \
          logger, level, __FILE__, __LINE__, 0, Ricardo::GetThreadId(), \
          Ricardo::GetFiberId(), time(0), Ricardo::Thread::GetName()))) \
      .getEvent()                                                       \
      ->format(fmt, __VA_ARGS__)
// 使用logger写入日志级别为debug的日志（格式化,printf）
#define ICEY_LOG_FMT_DEBUG(logger, fmt, ...) \
  ICEY_LOG_FMT_LEVEL(logger, Ricardo::LogLevel::DEBUG, fmt, __VA_ARGS__)
// 使用logger写入日志级别为info的日志（格式化,printf）
#define ICEY_LOG_FMT_INFO(logger, fmt, ...) \
  ICEY_LOG_FMT_LEVEL(logger, Ricardo::LogLevel::INFO, fmt, __VA_ARGS__)
// 使用logger写入日志级别为warn的日志（格式化,printf）
#define ICEY_LOG_FMT_WARN(logger, fmt, ...) \
  ICEY_LOG_FMT_LEVEL(logger, Ricardo::LogLevel::WARN, fmt, __VA_ARGS__)
// 使用logger写入日志级别为error的日志（格式化,printf）
#define ICEY_LOG_FMT_ERROR(logger, fmt, ...) \
  ICEY_LOG_FMT_LEVEL(logger, Ricardo::LogLevel::ERROR, fmt, __VA_ARGS__)
// 使用logger写入日志级别为fatal的日志（格式化,printf）
#define ICEY_LOG_FMT_FATAL(logger, fmt, ...) \
  ICEY_LOG_FMT_LEVEL(logger, Ricardo::LogLevel::FATAL, fmt, __VA_ARGS__)

#define ICEY_LOG_ROOT() Ricardo::LoggerMgr::GetInstance()->getRoot()
#define ICEY_LOG_NAME(name) Ricardo::LoggerMgr::GetInstance()->getLogger(name)

namespace Ricardo {

class Logger;
class LoggerManager;

// 日志级别
class LogLevel {
 public:
  // 日志级别
  enum Level {
    /// 未知级别
    UNKNOW = 0,
    /// DEBUG 级别
    DEBUG = 1,
    /// INFO 级别
    INFO = 2,
    /// WARN 级别
    WARN = 3,
    /// ERROR 级别
    ERROR = 4,
    /// FATAL 级别
    FATAL = 5
  };
  /**
   * @brief 将日志级别转成文本输出
   * @param[in] level 日志级别
   */
  static const char* ToString(LogLevel::Level level);
  /**
   * @brief 将文本转换成日志级别
   * @param[in] str 日志级别文本
   */
  static LogLevel::Level FormString(const std::string& str);
};

// 日志事件
class LogEvent {
 public:
  typedef std::shared_ptr<LogEvent> ptr;
  /**
   *@brief 构造函数
   *@param[in] logger 日志器
   *@param[in] level 日志级别
   *@param[in] file 文件名
   *@param[in] line 文件行号
   *@param[in] elapse 程序启动依赖的耗时
   *@param[in] thread_id 线程id
   *@param[in] fiber_id 协程id
   *@param[in] time 时间戳
   */
  LogEvent(std::shared_ptr<Logger> logger, LogLevel::Level level,
           const char* file, int32_t line, uint32_t elapse, uint32_t thread_id,
           uint32_t fiber_id, uint32_t time, const std::string& thread_name);

  /**
   *@brief 返回文件名
   */
  const char* getFile() const { return m_file; }

  /**
   *@brief 返回文件行号
   */
  int32_t getLine() const { return m_line; }

  /**
   *@brief 返回程序启动到现在为止的耗时
   */
  uint32_t getElapse() const { return m_elapse; }

  /**
   *@brief 返回线程id
   */
  uint32_t getThreadId() const { return m_threadId; }

  /**
   *@brief 返回协程id
   */
  uint32_t getFiberId() const { return m_fiberId; }

  /**
   *@brief 返回时间戳
   */
  uint32_t getTime() const { return m_time; }

  /**
   *@brief 获取线程名
   */
  const std::string getThredName() const { return m_threadName; }

  /**
   *@brief 获取连接
   */
  std::string getContent() const { return m_ss.str(); }

  /**
   *@brief 获取日志器
   */
  std::shared_ptr<Logger> getLogger() const { return m_logger; }

  /**
   *@brief 获取日志级别
   */
  LogLevel::Level getLevel() const { return m_level; }

  /**
   *@brief 获取输出
   */
  std::stringstream& getSS() { return m_ss; }

  /**
   *@brief 格式化写入日志内容
   */

  void format(const char* fmt, ...);
  /**
   *@brief 格式化写入日志内容
   */

  void format(const char* fmt, va_list al);

 private:
  const char* m_file = nullptr;  // 文件名
  int32_t m_line = 0;            // 行号
  int32_t m_elapse = 0;          // 程序启动到现在的毫秒数
  int32_t m_threadId = 0;        // 线程id
  uint32_t m_fiberId = 0;        // 协程id
  uint64_t m_time = 0;           // 时间戳
  std::string m_threadName;      // 线程名称

  std::stringstream m_ss;            // 日志内容流
  std::shared_ptr<Logger> m_logger;  // 日志器
  LogLevel::Level m_level;           // 日志等级
};

/**
 * @brief 日志事件包装器
 */
class LogEventWrap {
 public:
  /**
   * @brief 构造函数
   * @param[in] e 日志事件
   */
  LogEventWrap(LogEvent::ptr e);
  /**
   * @brief 析构函数
   */
  ~LogEventWrap();
  /**
   *@ brief 获取日志内容流
   */
  std::stringstream& getSS();
  /**
   *@ brief 获取日志事件
   */
  LogEvent::ptr getEvent() const { return m_event; }

 private:
  /**
   * @brief 日志事件
   */
  LogEvent::ptr m_event;
};

/**
 * @brief 日志格式器
 */
class LogFormatter {
 public:
  typedef std::shared_ptr<LogFormatter> ptr;
  /**
   * @brief 构造函数
   * @param[in] pattern 格式模板
   * @detalis
   * %m 消息
   * %p 日志级别
   * %r 累计毫秒数
   * %c 日志名称
   * %t 线程id
   * %n 换行
   * %d 时间
   * %f 文件名
   * %l 行号
   * %T 制表符
   * %F 协程id
   * %N 线程名称
   *
   * 默认格式 "%d{%Y-%m-%d %H:%M:%S}%T%t%T%N%T%F%T[%p]%T[%c]%T%f:%l%T%m%n"
   */
  LogFormatter(const std::string& pattern);

  /**
   * @brief 返回格式化的日志文本
   * @param[in] logger 日志器
   * @param[in] level 日志级别
   * @param[in] event 日志事件
   */
  std::string format(std::shared_ptr<Logger> logger, LogLevel::Level level,
                     LogEvent::ptr event);
  std::ostream& format(std::ostream& ofs, std::shared_ptr<Logger> logger,
                       LogLevel::Level level, LogEvent::ptr event);

 public:
  /**
   * @brief 日志内容格式化
   */
  class FormatItem {
   public:
    typedef std::shared_ptr<FormatItem> ptr;
    FormatItem(const std::string& fmt = ""){};
    /**
     *@ brief 析构函数
     */

    virtual ~FormatItem() {}

    /**
     * @brief 格式化日志到流
     * @param[in,out] os 日志输出器
     * @param[in] logger 日志器
     * @param[in] level 日志等级
     * @param[in] event 日志事件
     */
    virtual void format(std::ostream& os, std::shared_ptr<Logger> logger,
                        LogLevel::Level level, LogEvent::ptr event) = 0;
  };

  /**
   * @brief 初始化，解析日志模板
   */
  void init();

  /**
   * @brief 是否有错误
   */
  bool isError() const { return m_error; }

  /**
   * @brief 返回日志模板
   */
  const std::string getPattern() const { return m_pattern; }

 private:
  // 日志模板
  std::string m_pattern;
  // 日志格式解析后的格式
  std::vector<FormatItem::ptr> m_items;
  // 是否有错误
  bool m_error = false;
};

/**
 * @brief 日志输出目标
 */
class LogAppender {
  friend class Logger;

 public:
  typedef std::shared_ptr<LogAppender> ptr;
  typedef Spinlock MutexType;
  /**
   *@ brief 析构函数
   */
  virtual ~LogAppender(){};

  /**
   * @brief 写入日志
   * @param[in] logger 日志器
   * @param[in] level 日志等级
   * @param[in] event 日志事件
   */
  virtual void log(std::shared_ptr<Logger> logger, LogLevel::Level level,
                   LogEvent::ptr event) = 0;
  /**
   * @brief 将日志输出目标的配置转成YAML String
   */
  virtual std::string toYamlString() = 0;

  /**
   * @brief 更改日志格式
   */
  void setFormatter(LogFormatter::ptr val);

  /**
   * @brief 获取日志格式
   */
  LogFormatter::ptr getFormatter();

  /**
   * @brief 更改日志级别
   */
  LogLevel::Level getLevel() const { return m_level; }

  /**
   * @brief 获取日志级别
   */
  void setLevel(LogLevel::Level val) { m_level = val; }

 protected:
  /// 日志级别
  LogLevel::Level m_level;
  /// 是否有自己的日志格式器
  bool m_hasFormatter = false;
  // Mutex
  MutexType m_mutex;
  /// 日志格式器
  LogFormatter::ptr m_formatter;
};

/**
 * @brief 日志器
 */
class Logger : public std::enable_shared_from_this<Logger> {
  friend class LoggerManager;

 public:
  typedef std::shared_ptr<Logger> ptr;
  typedef Spinlock MutexType;

  /**
   * @brief 构造函数
   * @param[in] name 日志器名称
   */
  Logger(const std::string& name = "root");
  /**
   * @brief 写日志
   * @param[in] level 日志级别
   * @param[in] event 日志事件
   */
  void log(LogLevel::Level level, LogEvent::ptr event);

  /**
   * @brief 写debug级别的日志
   * @param[in] 日志事件
   */
  void debug(LogEvent::ptr event);
  /**
   * @brief 写info级别的日志
   * @param[in] 日志事件
   */

  void info(LogEvent::ptr event);
  /**
   * @brief 写warn级别的日志
   * @param[in] 日志事件
   */

  void warn(LogEvent::ptr event);
  /**
   * @brief 写error级别的日志
   * @param[in] 日志事件
   */
  void error(LogEvent::ptr event);
  /**
   * @brief 写fatal级别的日志
   * @param[in] 日志事件
   */

  void fatal(LogEvent::ptr event);

  /**
   * @brief 添加日志目标
   * @param[in] 日志目标
   */
  void addAppender(LogAppender::ptr appender);

  /**
   * @brief 删除日志目标
   * @param[in] 日志目标
   */
  void delAppender(LogAppender::ptr adppender);
  /**
   * @brief 清空日志目标
   */
  void clearAppenders();
  /**
   * @brief 返回日志级别
   */
  LogLevel::Level getLevel() const { return m_level; }

  /**
   * @brief 设置日志级别
   * @param[in] val 日志级别
   */
  void setLevel(LogLevel::Level val) { m_level = val; }

  /**
   * @brief 返回日志名称
   */
  const std::string& getName() const { return m_name; }

  /**
   * @brief 设置日志格式器
   * @param[in] val 日志格式器
   */
  void setFormatter(LogFormatter::ptr val);
  /**
   * @brief 设置日志格式模板
   * @param[in] val 日志格式模板
   */
  void setFormatter(const std::string& val);
  /**
   * @brief 获取日志格式器
   */
  LogFormatter::ptr getFormatter();

  /**
   * @brief 将日志器的配置转成YANL String
   */
  std::string toYamlString();

 private:
  std::string m_name;                       // 日志名称
  LogLevel::Level m_level;                  // 日志级别
  MutexType m_mutex;                        // Mutex
  std::list<LogAppender::ptr> m_appenders;  // 日志目标集合
  LogFormatter::ptr m_formatter;            // 日志格式器
  Logger::ptr m_root;                       // 主日志器
};

/**
 * @brief 输出到控制台的Appender
 */
class StdoutLogAppender : public LogAppender {
 public:
  typedef std::shared_ptr<StdoutLogAppender> ptr;
  virtual void log(Logger::ptr logger, LogLevel::Level level,
                   LogEvent::ptr event) override;

  std::string toYamlString() override;

 private:
};

/**
 * @brief 输出到文件的Appender
 */
class FileLogAppender : public LogAppender {
 public:
  typedef std::shared_ptr<FileLogAppender> ptr;
  FileLogAppender(const std::string& fileame);
  virtual void log(Logger::ptr logger, LogLevel::Level level,
                   LogEvent::ptr event) override;

  std::string toYamlString() override;
  /***
   * @brief 重新打开日志文件
   * @return 成功返回true
   */
  bool reopen();

 private:
  std::string m_filename;      // 文件路径
  std::ofstream m_filestream;  // 文件流
  uint64_t m_lastTime = 0;     // 上次重新打开事件
};

/**
 * @brief 日志器管理类
 */
class LoggerManager {
 public:
  typedef Spinlock MutexType;
  /**
   * @brief 构造函数
   */
  LoggerManager();
  /**
   * @brief 获取日志器
   * @param[in] name 日志器名称
   */
  Logger::ptr getLogger(const std::string& name);

  /**
   * @brief 初始化
   */
  void init();

  /**
   * @brief 返回主日志器
   */
  Logger::ptr getRoot() const { return m_root; }

  /**
   * @brief 将所有的日志器配置文件转成YAML String
   */
  std::string toYamlString();

 private:
  MutexType m_mutex;                             // Mutex
  std::map<std::string, Logger::ptr> m_loggers;  // 日志管理容器
  Logger::ptr m_root;                            // 主日志器
};

/// 日志器管理类单例模式
typedef Ricardo::Singleton<LoggerManager> LoggerMgr;

}  // namespace Ricardo
