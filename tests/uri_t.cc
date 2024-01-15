#include <iostream>

#include "uri.h"

int main(int argc, char** argv) {
  Ricardo::Uri::ptr uri = Ricardo::Uri::Create(
      "http://www.sylar.top/test/uri?id=100&name=sylar#frg");
  std::cout << uri->toString();
  auto addr = uri->createAddress();
  std::cout << *addr << std::endl;
  return 0;
}
