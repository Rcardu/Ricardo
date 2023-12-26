#pragma once

#include "log.h"
#include "stdhead.h"
#include "util.h"

#if defined __GUNC__ || defined __llvm__
#define ICEY_LICKLY(x) __builtin_expect(!!(x), 1)
#define ICEY_UNLICKLY(x) __builtin_expect(!!(x), 0)
#else
#define ICEY_LICKLY(x) (x)
#define ICEY_UNLICKLY(x) (x)
#endif

#define ICEY_ASSERT(x)                                 \
  if (ICEY_UNLICKLY(!(x))) {                           \
    ICEY_LOG_ERROR(ICEY_LOG_ROOT())                    \
        << "ASSERTION: " #x << "\nbacktrce:\n"         \
        << Ricardo::BacktraceToString(100, 2, "    "); \
    assert(x);                                         \
  }

#define ICEY_ASSERT2(x, w)                             \
  if (ICEY_UNLICKLY(!(x))) {                           \
    ICEY_LOG_ERROR(ICEY_LOG_ROOT())                    \
        << "ASSERTION: " #x << "\n"                    \
        << w << "\nbacktrce:\n"                        \
        << Ricardo::BacktraceToString(100, 2, "    "); \
    assert(x);                                         \
  }
