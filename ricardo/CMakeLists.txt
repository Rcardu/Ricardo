
aux_source_directory(./ SRC)
include_directories(${HEADPATH})
set(LIBRARY_OUTPUT_PATH ${LIBPATH})
link_directories(${LIBPATH})
add_library(${RICARDO} SHARED ${SRC})
target_link_libraries(${RICARDO} ${YAML_CPP})
