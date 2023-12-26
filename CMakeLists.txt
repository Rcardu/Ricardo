cmake_minimum_required(VERSION 3.20)
project(SOcketServer)

include (cmake/utils.cmake)
#重定义宏不视为错误
set(CMAKE_CXX_FLAGS "-Wno-builtin-macro-redefined")

#头文件路径、库生成路径、可执行程序路径
set(HEADPATH ${CMAKE_CURRENT_SOURCE_DIR}/include ${CMAKE_CURRENT_SOURCE_DIR}/yaml-cpp)
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


#递归子目录
add_subdirectory(ricardo)
add_subdirectory(tests)
