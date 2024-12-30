cmake_minimum_required(VERSION 3.31)
project(greeter)

add_subdirectory(hello)
set(SOURCE_FILES main.cpp)

add_executable(greeter ${SOURCE_FILES})
target_include_directories(
    greeter
    PUBLIC ${INCLUDE_DIR_hello})
target_link_libraries(greeter hello)
