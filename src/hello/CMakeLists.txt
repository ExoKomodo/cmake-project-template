cmake_minimum_required(VERSION 3.31)
project(hello C CXX)

set(SOURCE_FILES
    hello.cpp
)

add_library(hello SHARED STATIC ${SOURCE_FILES})
target_include_directories(
    hello
    PUBLIC ${INCLUDE_DIR_hello})
