#pragma once
#include "stdhead.h"

namespace Ricardo {

pid_t GetThreadId();
uint64_t GetFiberId();

void Backtrace(std::vector<std::string>& bt, int size = 64, int skip = 1);
std::string BacktraceToString(int size = 64, int skip = 2,
                              const std::string& prefix = "");
//时间ms
uint64_t GetCurrentMS();

uint64_t GetCurrentUS();

}  // namespace Ricardo
