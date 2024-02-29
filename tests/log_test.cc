#include "log.h"

class LogLevel {
 public:
  enum Level {
    UNKNOW = 0,
    DEBUG = 1,
    INFO = 2,
    WARN = 3,
    ERROR = 4,
    FATAL = 5
  };

  static const char* ToString(LogLevel::Level level) {
    switch (level) {
#define XX(name)       \
  case LogLevel::name: \
    return #name;
      break;
      XX(INFO);
      XX(DEBUG);
      XX(ERROR);
      XX(FATAL);
#undef XX
      default:
        return "UNKNOW";
    }
    return "UNKNOW";
  }
  static LogLevel::Level FromString(const std::string& str) {
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
};

int main(int argc, char** argv) {
  LogLevel lv;
  LogLevel::Level lvs = lv.FromString("debug");
  std::cout << lv.ToString(lvs) << std::endl;
  return 0;
}
