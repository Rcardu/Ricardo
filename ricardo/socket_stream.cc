#include "socket_stream.h"

#include "log.h"
#include "util.h"

static Ricardo::Logger::ptr g_logger = ICEY_LOG_NAME("system");
namespace Ricardo {

SocketStream::SocketStream(Socket::ptr sock, bool owner)
    : m_socket(sock), m_onwer(owner) {}
SocketStream::~SocketStream() {
  if (m_onwer && m_socket) {
    m_socket->close();
  }
}
bool SocketStream::isConnected() const {
  // ICEY_LOG_DEBUG(g_logger) << (m_socket ? "m_socket" : "nullptr");
  return m_socket && m_socket->isConnected();
}
int SocketStream::read(void* buffer, size_t length) {
  if (!isConnected()) {
    // ICEY_LOG_DEBUG(g_logger) << "not connected";
    return -1;
  }
  // ICEY_LOG_DEBUG(g_logger) << "recv";
  return m_socket->recv(buffer, length);
}
int SocketStream::read(ByteArray::ptr ba, size_t length) {
  if (!isConnected()) {
    return -1;
  }
  std::vector<iovec> iovs;
  ba->getWriteBuffers(iovs, length);
  int rt = m_socket->recv(&iovs[0], iovs.size());
  if (rt > 0) {
    ba->setPosition(ba->getPosition() + rt);
  }
  return rt;
}
int SocketStream::write(const void* buffer, size_t length) {
  if (!isConnected()) {
    return -1;
  }
  return m_socket->send(buffer, length);
}
int SocketStream::write(ByteArray::ptr ba, size_t length) {
  if (!isConnected()) {
    return -1;
  }
  std::vector<iovec> iovs;
  ba->getReadBuffers(iovs, length);
  int rt = m_socket->send(&iovs[0], iovs.size());
  if (rt > 0) {
    ba->setPosition(ba->getPosition() + rt);
  }
  return rt;
}
void SocketStream::close() {
  if (m_socket) {
    m_socket->close();
  }
}

}  // namespace Ricardo
