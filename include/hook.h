#pragma once
#include "stdhead.h"

namespace Ricardo{
  bool is_hook_enable();
  void set_hook_enable(bool flag);



}

extern "C"{
  typedef unsigned int (*sleep_fun)(unsigned int seconds);
  extern sleep_fun sleep_f;

  typedef int (*usleep_fun)(useconds_t usec);

  unsigned int sleep(unsigned int seconds);
  int usleep(useconds_t usec);
}

