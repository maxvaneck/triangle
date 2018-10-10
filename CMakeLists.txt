cmake_minimum_required(VERSION 3.12)
project(triangle)

set(CMAKE_CXX_STANDARD 14)

add_executable(triangle main.cpp triangle.cpp triangle.h)

add_subdirectory(./googletest)
add_executable(tests tests.cpp triangle.cpp triangle.h)
target_include_directories(tests PUBLIC ./googletest/include)

target_link_libraries(tests gtest gtest_main)