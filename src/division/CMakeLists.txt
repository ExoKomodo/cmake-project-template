cmake_minimum_required(VERSION 3.31)
project(division C CXX)

set(SOURCE_FILES
    division.hpp
    division.cpp
)

add_library(division SHARED STATIC ${SOURCE_FILES})
