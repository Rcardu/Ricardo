
aux_source_directory(./ SRC1)
aux_source_directory(./http SRC2)
aux_source_directory(./examples SRC3)
set(SRC ${SRC1} ${SRC2} ${SRC3})
ragelmaker(http/http11_parser.rl SRC ${CMAKE_CURRENT_SOURCE_DIR}/http)
ragelmaker(http/httpclient_parser.rl SRC ${CMAKE_CURRENT_SOURCE_DIR}/http)
ragelmaker(uri.rl SRC ${CMAKE_CURRENT_SOURCE_DIR})
include_directories(${HEADPATH})
set(LIBRARY_OUTPUT_PATH ${LIBPATH})
link_directories(${LIBPATH})
add_library(${RICARDO} SHARED ${SRC})
#重定义此路径为相对路径
force_redefine_file_macro_for_sources (${RICARDO})  #__FILE__ 
target_link_libraries(${RICARDO} ${YAML_CPP})
