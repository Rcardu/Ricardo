#include "address.h"
#include <unistd.h>
#include <cstring>
#include <sstream>

namespace Ricardo {

int Address::getFamily() const {
  return getAddr()->sa_family;
}

std::string Address::toString() {
  std::stringstream ss;
  insert(ss);
  return ss.str();
}

bool Address::operator<(const Address& rhs) const {
  socklen_t minlen = std::min(getAddrLen(), rhs.getAddrLen());
  int reslut = memcmp(getAddr(), rhs.getAddr(), minlen);
  if (reslut < 0) {
    return true;
  } else if (reslut > 0) {
    return false;
  } else if (getAddrLen() < rhs.getAddrLen()) {
    return true;
  }
  return false;
}

bool Address::operator==(const Address& rhs) const {
  return getAddrLen() == rhs.getAddrLen() &&
         memcmp(getAddr(), rhs.getAddr(), getAddrLen()) == 0;
}

bool Address::operator!=(const Address& rhs) const {
  return !(*this == rhs);
}

IPv4Address::IPv4Address(uint32_t address, uint32_t port){

}

  sockaddr* IPv4Address::getAddr() const {

  }
  socklen_t IPv4Address::getAddrLen() const {

  }
  std::ostream& IPv4Address::insert(std::ostream& os) const {

  }
 
  IPAddress::ptr IPv4Address::broadcastAddress(uint32_t prefix_len) {

  }
  IPAddress::ptr IPv4Address::networkAddress(uint32_t prefix_len) {

  }
  IPAddress::ptr IPv4Address::subnetMask(uint32_t prefix_len) {

  }
  uint32_t IPv4Address::getPort() const {

  }
  void IPv4Address::setPort(uint32_t v) {

  }

IPv6Address::IPv6Address(uint32_t address, uint32_t port){

}

  sockaddr* IPv6Address::getAddr() const {

  }
  socklen_t IPv6Address::getAddrLen() const {

  }
  std::ostream& IPv6Address::insert(std::ostream& os) const {

  }
 
  IPAddress::ptr IPv6Address::broadcastAddress(uint32_t prefix_len) {

  }
  IPAddress::ptr IPv6Address::networkAddress(uint32_t prefix_len) {

  }
  IPAddress::ptr IPv6Address::subnetMask(uint32_t prefix_len) {

  }
  uint32_t IPv6Address::getPort() const {

  }
  void IPv6Address::setPort(uint32_t v) {

  }

UnixAddress::UnixAddress(const std::string& path){

}

sockaddr* UnixAddress::getAddr() const {

}
  socklen_t UnixAddress::getAddrLen() const{

  }
  std::ostream& UnixAddress::insert(std::ostream& os) const{

  }


UnknowAddress::UnknowAddress(){

}
sockaddr* UnknowAddress::getAddr() const {

}
  socklen_t UnknowAddress::getAddrLen() const{

  }
  std::ostream& UnknowAddress::insert(std::ostream& os) const{

  }

}  // namespace Ricardo
