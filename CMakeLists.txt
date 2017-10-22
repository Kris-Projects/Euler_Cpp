cmake_minimum_required(VERSION 3.8)
project(Euler)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES Problem_1.cpp Problem_2.cpp)
add_executable(Euler ${SOURCE_FILES})