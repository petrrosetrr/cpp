cmake_minimum_required(VERSION 3.19)
project(module08)

set(CMAKE_CXX_STANDARD 14)

include_directories(ex00)
add_executable(ex00
        ex00/easyfind.hpp
        ex00/main.cpp)

include_directories(ex01)
add_executable(ex01
        ex01/Span.cpp
        ex01/Span.hpp
        ex01/main.cpp)
