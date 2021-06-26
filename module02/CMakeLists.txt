cmake_minimum_required(VERSION 3.19)
project(module02)

set(CMAKE_CXX_STANDARD 14)

include_directories(ex00)
add_executable(ex00
        ex00/Fixed.cpp
        ex00/Fixed.h
        ex00/main.cpp)

include_directories(ex01)
add_executable(ex01
        ex01/Fixed.cpp
        ex01/Fixed.h
        ex01/main.cpp)

include_directories(ex02)
add_executable(ex02
        ex02/Fixed.cpp
        ex02/Fixed.h
        ex02/main.cpp)