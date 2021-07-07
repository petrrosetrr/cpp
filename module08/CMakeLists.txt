cmake_minimum_required(VERSION 3.19)
project(module08)

set(CMAKE_CXX_STANDARD 14)

include_directories(ex00)
add_executable(ex00
        ex00/easyfind.hpp
        ex00/main.cpp)
