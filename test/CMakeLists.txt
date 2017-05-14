cmake_minimum_required(VERSION 3.31)
project(tests LANGUAGES CXX)

set(SOURCE_FILES test.cpp)
set(Catch2_SOURCE_DIR lib/catch2)

include_directories(${DIVISION_HEADERS_DIR})
include_directories(${Catch2_SOURCE_DIR}/src)

# Testing
enable_testing()

add_test(NAME cli.has_help COMMAND tests --help)

add_subdirectory(${Catch2_SOURCE_DIR})
include(${Catch2_SOURCE_DIR}/extras/Catch.cmake)
add_executable(tests ${SOURCE_FILES})
target_link_libraries(
    tests
    PUBLIC division
    PRIVATE Catch2::Catch2WithMain)
catch_discover_tests(
    tests
    TEST_PREFIX
    "unittests."
    REPORTER
    XML
    OUTPUT_DIR
    .
    OUTPUT_PREFIX
    "unittests."
    OUTPUT_SUFFIX
    .xml)

install(TARGETS tests DESTINATION bin)
