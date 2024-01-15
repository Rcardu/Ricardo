#include <netinet/in.h>
#include <vector>
#include "address.h"
#include "log.h"
#include "util.h"

static Ricardo::Logger::ptr g_logger = ICEY_LOG_ROOT();

void test() {
    std::vector<Ricardo::Address::ptr> addrs;
    ICEY_LOG_INFO(g_logger) << "begin";
    bool v = Ricardo::Address::Lookup(addrs, "www.baidu.com");
    ICEY_LOG_INFO(g_logger) << "end";
    if (!v) {
        ICEY_LOG_ERROR(g_logger) << "lookup fail";
    }
    for (size_t i = 0; i < addrs.size(); i++) {
        ICEY_LOG_INFO(g_logger) << i << " - " << addrs[i]->toString();
    }
}
void test_iface() {
    std::multimap<std::string, std::pair<Ricardo::Address::ptr, uint32_t>>
        results;

    bool v = Ricardo::Address::GetInterfaceAddresses(results);
    if (!v) {
        ICEY_LOG_ERROR(g_logger) << "GetInterfaceAddresses fail";
        return;
    }
    for (auto &i : results) {
        ICEY_LOG_INFO(g_logger)
            << i.first << " - " << i.second.first->toString() << " - "
            << i.second.second;
    }
}

void test_ipv4() {
    auto addr = Ricardo::IPAddress::Create("127.0.0.8");
    if (addr) {
        ICEY_LOG_INFO(g_logger) << addr->toString();
    }
}
int main() {
    // test_ipv4();
    test_iface();
    // test();
    return 0;
}
