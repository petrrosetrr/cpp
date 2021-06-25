cmake_minimum_required(VERSION 3.19)
project(cpp)

set(CMAKE_CXX_STANDARD 14)

include_directories(ex00)
add_executable(cpp
        ex00/Fixed.cpp
        ex00/Fixed.h
        ex00/main.cpp
        ex00/Makefile)


