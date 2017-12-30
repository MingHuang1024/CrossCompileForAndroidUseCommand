cmake_minimum_required(VERSION 3.4.1)

add_library(myso SHARED Native.c)

set_target_properties(myso
                      PROPERTIES
                      LIBRARY_OUTPUT_DIRECTORY
                      "${CMAKE_CURRENT_SOURCE_DIR}/lib")
include_directories(/home/hm/JDK/jdk1.8.0_151/include /home/hm/JDK/jdk1.8.0_151/include/linux)

target_link_libraries(myso
                     log)

