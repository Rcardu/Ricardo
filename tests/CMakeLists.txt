
#aux_source_directory(log_t.cc T_LOG)
#aux_source_directory(./config_t.cc T_CONFIG)

#设置可执行程序输出路径
set(EXECUTABLE_OUTPUT_PATH ${EXECPATH})

#设置头文集搜索路径
include_directories(${HEADPATH})

#设置库文件搜索路径
link_directories(${LIBPATH})

#生成可执行程序
add_executable(${NAME_L} log_t.cc)
add_executable(${NAME_C} config_t.cc)
add_executable(${NAME_T} thread_t.cc)
add_executable(${NAME_U} util_t.cc)
add_executable(${NAME_F} fiber_t.cc)
add_executable(${NAME_S} scheduler_t.cc)
add_executable(${NAME_IO} iomanager_t.cc)
add_executable(${NAME_HK} hook_t.cc)
add_executable(${NAME_AD} address_t.cc)
add_executable(${NAME_SK} socket_t.cc)
add_executable(${NAME_BY} bytearray_t.cc)
add_executable(${NAME_HP} http_t.cc)
add_executable(${NAME_PAR} http_parser_t.cc)
add_executable(${NAME_TSR} tcp_server_t.cc)
add_executable(${NAME_HTSR} http_server_t.cc)
add_executable(${NAME_HTCN} http_connection_t.cc)
add_executable(${NAME_URI} uri_t.cc)

#重定义此路径为相对路径
#将所有源文件路径重定义
#force_redefine_file_macro_for_sources(${TESTS}) #__FILE__


#链接动态库
target_link_libraries(${NAME_L} ${RICARDO})
target_link_libraries(${NAME_C} ${RICARDO})
target_link_libraries(${NAME_T} ${RICARDO})
target_link_libraries(${NAME_U} ${RICARDO})
target_link_libraries(${NAME_F} ${RICARDO})
target_link_libraries(${NAME_S} ${RICARDO})
target_link_libraries(${NAME_IO} ${RICARDO})
target_link_libraries(${NAME_HK} ${RICARDO})
target_link_libraries(${NAME_AD} ${RICARDO})
target_link_libraries(${NAME_SK} ${RICARDO})
target_link_libraries(${NAME_BY} ${RICARDO})
target_link_libraries(${NAME_HP} ${RICARDO})
target_link_libraries(${NAME_PAR} ${RICARDO})
target_link_libraries(${NAME_TSR} ${RICARDO})
target_link_libraries(${NAME_HTSR} ${RICARDO})
target_link_libraries(${NAME_HTCN} ${RICARDO})
target_link_libraries(${NAME_URI} ${RICARDO})

