#pragma once
#include "socket_s.h"
#include "stdhead.h"
#include "streams.h"

namespace Ricardo {

class SocketStream : public Stream {
 public:
  typedef std::shared_ptr<SocketStream> ptr;
  SocketStream(Socket::ptr sock, bool owner = true);
  ~SocketStream();

  virtual int read(void* buffer, size_t length) override;
  virtual int read(ByteArray::ptr ba, size_t length) override;
  virtual int write(const void* buffer, size_t length) override;
  virtual int write(ByteArray::ptr ba, size_t length) override;
  virtual void close() override;

  Socket::ptr getSocket() const { return m_socket; }
  bool isConnected() const;

 protected:
  Socket::ptr m_socket;
  bool m_onwer;
};
}  // namespace Ricardo
