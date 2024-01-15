cmake_minimum_required(VERSION 3.20)
project(SOcketServer)

include (cmake/utils.cmake)
#重定义宏不视为错误
set(CMAKE_CXX_FLAGS "-Wno-builtin-macro-redefined")

#头文件路径、库生成路径、可执行程序路径
set(HEADPATH ${CMAKE_CURRENT_SOURCE_DIR}/include ${CMAKE_CURRENT_SOURCE_DIR}/yaml-cpp ${CMAKE_CURRENT_SOURCE_DIR}/include/http)
set(LIBPATH ${CMAKE_CURRENT_SOURCE_DIR}/lib)
set(EXECPATH ${CMAKE_CURRENT_SOURCE_DIR}/bin)

#库名
set(RICARDO ricardo)
set(YAML_CPP yaml-cpp)

#可执行程序名
set(NAME_C appconfig)
set(NAME_L applog)
set(NAME_T appthread)
set(NAME_U apputil)
set(NAME_F appfiber)
set(NAME_S appschedler)
set(NAME_IO appiomanager)
set(NAME_HK apphook)
set(NAME_AD appaddress)
set(NAME_SK appsocket)
set(NAME_BY appbytearray)
set(NAME_HP apphttp)
set(NAME_PAR apphttpparser)
set(NAME_TSR apptcpserver)
set(NAME_ECHO appechoserver)
set(NAME_HTSR apphttpserver)
set(NAME_HTCN apphttpconnect)
set(NAME_URI appuri)

#设置子目录别名
set(TESTS tests)
set(EXAMPLES examples)

#递归子目录
add_subdirectory(ricardo)
add_subdirectory(tests)
add_subdirectory(examples)

