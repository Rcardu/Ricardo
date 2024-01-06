
#二进制文件输出路径
set(EXECUTABLE_OUTPUT_PATH ${EXECPATH})
include_directories(${HEADPATH})
#链接库文件路径
link_directories(${LIBPATH})
#二进制文件生成
add_executable(${NAME_ECHO} echo_server.cc)
#相对路径
#force_redefine_file_macro_for_source(${EXAMPLES})  #__FILE__ 
#链接动态库
target_link_libraries(${NAME_ECHO} ${RICARDO})
