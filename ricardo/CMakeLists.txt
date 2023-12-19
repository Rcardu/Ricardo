
aux_source_directory(./ SRC)
include_directories(${HEADPATH})
set(LIBRARY_OUTPUT_PATH ${LIBPATH})
link_directories(${LIBPATH})
add_library(${RICARDO} SHARED ${SRC})
#重定义此路径为相对路径
redefine_file_macro (${RICARDO})  #__FILE__ 
target_link_libraries(${RICARDO} ${YAML_CPP})
