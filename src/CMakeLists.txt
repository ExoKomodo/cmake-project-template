cmake_minimum_required(VERSION 3.31)
project(divider)

include_directories(division)
add_subdirectory(division)
set(SOURCE_FILES main.cpp)

add_executable(divider ${SOURCE_FILES})
target_link_libraries(divider division)
# install(TARGETS divider DESTINATION ${DIVISIBLE_INSTALL_BIN_DIR})
