cmake_minimum_required(VERSION 3.19)
project(module06)

set(CMAKE_CXX_STANDARD 14)

include_directories(ex00)
add_executable(ex00
        ex00/Converter.cpp
        ex00/Converter.hpp
        ex00/main.cpp)

include_directories(ex01)
add_executable(ex01
        ex01/Data.cpp
        ex01/Data.hpp
        ex01/main.cpp)

include_directories(ex02)
add_executable(ex02
        ex02/Base.hpp
        ex02/A.hpp
        ex02/B.hpp
        ex02/C.hpp
        ex02/main.cpp)