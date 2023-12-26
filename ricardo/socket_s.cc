#include "socket_s.h"
#include <asm-generic/socket.h>
#include <bits/types/struct_iovec.h>
#include <bits/types/struct_timeval.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <unistd.h>
#include <cstddef>
#include <cstring>
#include <ctime>
#include <memory>
#include "address.h"
#include "fd_manager.h"
#include "iomanager.h"
#include "log.h"
#include "macro.h"
#include "hook.h"
#include "util.h"

static Ricardo::Logger::ptr g_logger = ICEY_LOG_NAME("system");
namespace Ricardo {

Socket::Socket(int family, int type, int protocol)
    : m_sock(-1),
      m_family(family),
      m_type(type),
      m_protocol(protocol),
      m_isConnected(false) {}
Socket::~Socket(){
  close();
}
int64_t Socket::getSendTimeout(){
  FdCtx::ptr ctx = FdMgr::GetInstance()->get(m_sock);
  if(ctx){
    return ctx->getTimeout(SO_SNDTIMEO);
  }
  return -1;
}
void Socket::setSendTimeout(int64_t v){
  struct timeval tv{int(v / 1001), int(v % 1000* 1000)};
  setOption(SOL_SOCKET, SO_SNDTIMEO, tv);
}
int64_t Socket::getRecvTimeout(){
  FdCtx::ptr ctx = FdMgr::GetInstance()->get(m_sock);
  if(ctx){
    return ctx->getTimeout(SO_RCVTIMEO);
  }
  return -1;
}
void Socket::setRecvTimeout(int64_t v){
  struct timeval tv{int(v / 1001), int(v % 1000* 1000)};
  setOption(SOL_SOCKET, SO_RCVTIMEO, tv);
}
bool Socket::getOption(int level, int option, void* result, size_t* len){
  int rt = getsockopt(m_sock, level, option,result, (socklen_t*)len);
  if(rt){
    ICEY_LOG_DEBUG(g_logger)
        << "getOption sock=" << m_sock << " level=" << level
        << " option=" << option << " errno=" << errno
        << "errstr=" << strerror(errno);
    return false;
  }
  return true;
}
bool Socket::setOption(int level, int option, const void* result, size_t len){
  if(setsockopt(m_sock, level, option, result, (socklen_t)len)){
    return false;
  }
  return true;
}

Socket::ptr Socket::accept(){
  Socket::ptr sock(new Socket(m_family, m_type, m_protocol));
  int newsock = ::accept(m_sock, nullptr, nullptr);
  if(newsock == -1){
    ICEY_LOG_ERROR(g_logger) << "accept(" << m_sock << ") errno=" << errno
                             << " errstr=" << strerror(errno);
    return nullptr;
  }
  if(sock->init(newsock)){
    return sock;
  }
  return nullptr;
}
bool Socket::init(int sock){
  FdCtx::ptr ctx = FdMgr::GetInstance()->get(sock);
  if(ctx && ctx->isSocket() && !ctx->isClose()){
    m_sock = sock;
    m_isConnected = true;
    initSock();
    getLocalAddress();
    getRemoteAddress();
    return true;
  }
  return false;
}

bool Socket::bind(const Address::ptr addr) {
  if (!isValid()) {
    newSock();
    if (ICEY_UNLICKLY(!isValid())) {
      return false;
    }
  }
  if (ICEY_UNLICKLY(addr->getFamily() != m_family)) {
    ICEY_LOG_ERROR(g_logger)
        << "bind sock.family(" << m_family << ") addr.family("
        << addr->getFamily() << ") not equal, addr=" << addr->toString();
    return false;
  }

  if(::bind(m_sock, addr->getAddr(), addr->getAddrLen())){
    ICEY_LOG_ERROR(g_logger)<<"bind errno="<<errno
      <<" errstr="<<strerror(errno);
    return false;
  }
  getLocalAddress();
  return true;
}
bool Socket::connect(const Address::ptr addr, uint64_t timeout_ms){
  if (!isValid()) {
    newSock();
    if (ICEY_UNLICKLY(!isValid())) {
      return false;
    }
  }
  if (ICEY_UNLICKLY(addr->getFamily() != m_family)) {
    ICEY_LOG_ERROR(g_logger)
        << "connect sock.family(" << m_family << ") addr.family("
        << addr->getFamily() << ") not equal, addr=" << addr->toString();
    return false;
  }
  if(timeout_ms == (uint64_t)-1){
    if(::connect(m_sock, addr->getAddr(), addr->getAddrLen())){
      ICEY_LOG_ERROR(g_logger)
          << "sock=" << m_sock << " connect(" << addr->toString()
          << ") error errno=" << errno << " errstr=" << strerror(errno);
      close();
      return false;
    }
  }else{
    if(::connect_with_timeout(m_sock, addr->getAddr(), addr->getAddrLen(), timeout_ms)){
      ICEY_LOG_ERROR(g_logger)
          << "sock=" << m_sock << " connect(" << addr->toString()
          << ") timeout=" << timeout_ms << " error errno=" << errno
          << " errstr=" << strerror(errno);
      close();
      return false;
    }
  }
  m_isConnected = true;
  getRemoteAddress();
  getLocalAddress();
  return true;
}
bool Socket::listen(int backlog){
  if(isValid()){
    ICEY_LOG_ERROR(g_logger)<<"listen error sock=-1";
    return false;
  }
  if(::listen(m_sock, backlog)){
    ICEY_LOG_ERROR(g_logger)<<"linten error errno="<<errno
      <<"errstr="<<strerror(errno);
    return false;
  }
  return true;
}

bool Socket::close(){
  if(!m_isConnected && m_sock == -1){
    return true;
  }
  m_isConnected = false;
  if(m_sock != -1){
    ::close(m_sock);
    m_sock = -1;
  }
  return false;
}
int Socket::send(const void* buffer, size_t length, int flags){
  if(isConnected()){
    return ::send(m_sock, buffer, length, flags);
  }
  return -1;
}
int Socket::send(const iovec* buffers, size_t length, int flags){
  if(isConnected()){
    msghdr msg;
    memset(&msg, 0, sizeof(msg));
    msg.msg_iov = (iovec*)buffers;
    msg.msg_iovlen = length;
    return ::sendmsg(m_sock, &msg, flags);
  }
  return -1;
}
int Socket::sendTo(const void* buffer, size_t length, const Address::ptr to,
                   int flags){
  if(isConnected()){
    return ::sendto(m_sock, buffer, length, flags, to->getAddr(), to->getAddrLen());
  }
  return -1;
}

int Socket::sendTo(const iovec* buffers, size_t length, const Address::ptr to,
                   int flags){
  if(isConnected()){
    msghdr msg;
    memset(&msg, 0, sizeof(msg));
    msg.msg_iov = (iovec*)buffers;
    msg.msg_iovlen = length;
    msg.msg_name = (void*)to->getAddr();
    msg.msg_namelen = to->getAddrLen();
    return ::sendmsg(m_sock, &msg, flags);
  }
  return -1;
}

int Socket::recv(void* buffer, size_t length, int flags){
  if(isConnected()){
    return ::recv(m_sock, buffer, length, flags);
  }
  return -1;
}
int Socket::recv(iovec* buffers, size_t length, int flags){
  if(isConnected()){
    msghdr msg;
    memset(&msg, 0, sizeof(msg));
    msg.msg_iov = (iovec*)buffers;
    msg.msg_iovlen = length;
    return ::recvmsg(m_sock, &msg, flags);
  }
  return -1;
}
int Socket::recvFrom(void* buffer, size_t length, Address::ptr from,
                     int flags){
  if(isConnected()){
    socklen_t len = from->getAddrLen();
    return ::recvfrom(m_sock, buffer, length, flags, from->getAddr(),&len);
  }
  return -1;
}
int Socket::recvFrom(iovec* buffers, size_t length, Address::ptr from,
                     int flags){
  if(isConnected()){
    msghdr msg;
    memset(&msg, 0, sizeof(msg));
    msg.msg_iov = (iovec*)buffers;
    msg.msg_iovlen = length;
    msg.msg_name = (void*)from->getAddr();
    msg.msg_namelen = from->getAddrLen();
    return ::sendmsg(m_sock, &msg, flags);
  }
  return -1;
}
Address::ptr Socket::getRemoteAddress(){
  if(m_remoteAddress){
    return m_remoteAddress;
  }
  Address::ptr result;
  switch(m_family){
  case AF_INET:
    result.reset(new IPv4Address());
    break;
  case AF_INET6:
    result.reset(new IPv6Address());
    break;
  case AF_UNIX:
    result.reset(new UnixAddress());
    break;
  default:
    result.reset(new UnknowAddress(m_family));
  break;
  }
  socklen_t addrlen = result->getAddrLen();
  if(getpeername(m_sock, result->getAddr(), &addrlen)){
    ICEY_LOG_ERROR(g_logger)<<"getpeername error sock="<<m_sock
      <<" errno="<<errno<<" errstr="<<strerror(errno);
    return Address::ptr(new UnknowAddress(m_family));
  }
  if(m_family == AF_UNIX){
    UnixAddress::ptr addr = std::dynamic_pointer_cast<UnixAddress>(result);
    addr->setAddrLen(addrlen);
  }
  m_remoteAddress = result;
  return m_remoteAddress;
}
Address::ptr Socket::getLocalAddress(){
  if(m_localAddress){
    return m_remoteAddress;
  }
  Address::ptr result;
  switch(m_family){
  case AF_INET:
    result.reset(new IPv4Address());
    break;
  case AF_INET6:
    result.reset(new IPv6Address());
    break;
  case AF_UNIX:
    result.reset(new UnixAddress());
    break;
  default:
    result.reset(new UnknowAddress(m_family));
  break;
  }
  socklen_t addrlen = result->getAddrLen();
  if(getsockname(m_sock, result->getAddr(), &addrlen)){
    ICEY_LOG_ERROR(g_logger)<<"getpeername error sock="<<m_sock
      <<" errno="<<errno<<" errstr="<<strerror(errno);
    return Address::ptr(new UnknowAddress(m_family));
  }
  if(m_family == AF_UNIX){
    UnixAddress::ptr addr = std::dynamic_pointer_cast<UnixAddress>(result);
    addr->setAddrLen(addrlen);
  }
  m_localAddress = result;
  return m_localAddress ;

}
bool Socket::isValid() const{
  return m_sock != -1;
}
int Socket::getError(){
  int error = 0;
  size_t len = sizeof(error);
  if(!getOption(SOL_SOCKET, SO_REUSEADDR,&error,&len)){
    return -1;
  }
  return error;
}
std::ostream& Socket::dump(std::ostream& os) const{
  os<<"[Socket sock="<<m_sock
    <<" is_connected="<<m_isConnected
    <<" family="<<m_family
    <<" type="<<m_type
    <<" protocol="<<m_protocol;
    if(m_localAddress){
      os<<" local_address="<<m_localAddress->toString();
    }
    if(m_remoteAddress){
      os<<" remote_address="<<m_remoteAddress->toString();
    }
    os<<"]";
    return os;
}
bool Socket::cancelRead(){
  return IOManager::GetThis()->cancelEvent(m_sock, Ricardo::IOManager::READ);
}
bool Socket::cancelWrite(){
  return IOManager::GetThis()->cancelEvent(m_sock, Ricardo::IOManager::WRITE);
}
bool Socket::cancelAccept() {
  return IOManager::GetThis()->cancelEvent(m_sock, Ricardo::IOManager::READ);
}

bool Socket::cancelAll() {
  return IOManager::GetThis()->cancelAll(m_sock);
}
void Socket::initSock(){
  int val = 1;
  setOption(SOL_SOCKET, SO_REUSEADDR, val);
  if(m_type == SOCK_STREAM){
    setOption(IPPROTO_TCP, TCP_NODELAY, val);
  }
}
void Socket::newSock(){
  m_sock = socket(m_family, m_type, m_protocol);
  if(ICEY_LICKLY(m_sock != -1)){
    initSock();
  }else{
    ICEY_LOG_ERROR(g_logger)
        << "socket(" << m_family << ", " << m_type << ", " << m_protocol
        << ") errno=" << errno << " errstr=" << strerror(errno);
  }
}

}  // namespace Ricardo
