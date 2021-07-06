cmake_minimum_required(VERSION 3.19)
project(module07)

set(CMAKE_CXX_STANDARD 14)

include_directories(ex00)
add_executable(ex00
        ex00/whatever.hpp
        ex00/main.cpp)

include_directories(ex01)
add_executable(ex01
        ex01/iter.hpp
        ex01/main.cpp)