cmake_minimum_required(VERSION 3.19)
project(module04)

set(CMAKE_CXX_STANDARD 14)

include_directories(ex00)
add_executable(ex00
        ex00/Sorcerer.cpp
        ex00/Sorcerer.h
        ex00/Victim.cpp
        ex00/Victim.h
        ex00/Peon.cpp
        ex00/Peon.h
        ex00/main.cpp)
