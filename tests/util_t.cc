#include "ricardo.h"

Ricardo::Logger::ptr g_logger = ICEY_LOG_ROOT();

void test_assert(){
    ICEY_LOG_INFO(g_logger)<<Ricardo::BacktraceToString(10);
    ICEY_ASSERT2(0 == 1, "abcdef xx");
}
int main(int argc, char* argv[])
{
    test_assert();
    return 0;
}

