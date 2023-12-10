cmake_minimum_required(VERSION 3.20)
project(SOcketServer)


set(HEADPATH ${CMAKE_CURRENT_SOURCE_DIR}/include ${CMAKE_CURRENT_SOURCE_DIR}/yaml-cpp)
set(LIBPATH ${CMAKE_CURRENT_SOURCE_DIR}/lib)
set(EXECPATH ${CMAKE_CURRENT_SOURCE_DIR}/bin)

set(RICARDO ricardo)
set(YAML_CPP yaml-cpp)

set(NAMET app_log)
set(NAMEC app_config)

add_subdirectory(ricardo)
add_subdirectory(tests)
add_subdirectory(test_config)