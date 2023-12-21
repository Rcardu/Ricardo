#include<iostream>
#include "log.h"
#include "util.h" 
#include "singleton.h" //测试 

int main(){ 
    Ricardo::Logger::ptr logger(new Ricardo::Logger); 
    logger->addAppender(Ricardo::LogAppender::ptr(new Ricardo::StdoutLogAppender)); 
    Ricardo::FileLogAppender::ptr file_appender(new Ricardo::FileLogAppender("./log.txt")); 
    Ricardo::LogFormatter::ptr fmt(new Ricardo::LogFormatter("%d%T%p%T%m%n")); 
    file_appender->setFormatter(fmt); 
    file_appender->setLevel(Ricardo::LogLevel::ERROR);

    logger->addAppender(file_appender);

    //Ricardo::LogEvent::ptr event(new Ricardo::LogEvent(__FILE__,__LINE__, 0, Ricardo::GetThreadId(), Ricardo::GetFiberId(), time(0)));

    // logger->log(Ricardo::LogLevel::DEBUG,event);
    std::cout<<"hello Ricardo log"<<std::endl;

    ICEY_LOG_INFO(logger)<<"test macro";
    ICEY_LOG_ERROR(logger)<<"test macro error";

    ICEY_LOG_FMT_ERROR(logger,"test macro fmt error %s","aa");
    
    auto l = Ricardo::LoggerMgr::GetInstance()->getLogger("xx");
    ICEY_LOG_INFO(l)<<"xxx";
    return 0;
}
