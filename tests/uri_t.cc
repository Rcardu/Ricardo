#include <iostream>

#include "uri.h"

int main(int argc, char** argv) {
  Ricardo::Uri::ptr uri = Ricardo::Uri::Create(
      R"(https://admin@www.sylar.top/test/中文/uri?id=100&name=sylar&vv=中文#frg中文)");
  std::cout << uri->toString() << std::endl;
  auto addr = uri->createAddress();
  std::cout << *addr << std::endl;
  return 0;
}
