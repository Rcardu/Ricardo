#pragma once

#include "log.h"
#include "stdhead.h"
#include "util.h"

#define ICEY_ASSERT(x)                                \
  if (!(x)) {                                          \
    ICEY_LOG_ERROR(ICEY_LOG_ROOT())                  \
        << "ASSERTION: " #x << "\nbacktrce:\n"         \
        << Ricardo::BacktraceToString(100, 2, "    "); \
    assert(x);                                         \
  }

#define ICEY_ASSERT2(x, w)                            \
  if (!(x)) {                                          \
    ICEY_LOG_ERROR(ICEY_LOG_ROOT())                  \
        << "ASSERTION: " #x << "\n"                    \
        << w << "\nbacktrce:\n"                        \
        << Ricardo::BacktraceToString(100, 2, "    "); \
    assert(x);                                         \
  }
