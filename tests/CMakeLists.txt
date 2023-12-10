
aux_source_directory(./ SRC)
set(EXECUTABLE_OUTPUT_PATH ${EXECPATH})
include_directories(${HEADPATH})
link_directories(${LIBPATH})
add_executable(${NAMET} ${SRC})
target_link_libraries(${NAMET} ${RICARDO})