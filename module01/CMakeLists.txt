cmake_minimum_required(VERSION 3.19)
project(module01)

set(CMAKE_CXX_STANDARD 14)

include_directories(ex00)
add_executable(ex00
        ex00/main.cpp
        ex00/Pony.cpp
        ex00/Pony.h)

include_directories(ex02)
add_executable(ex02
        ex02/main.cpp
        ex02/Zombie.cpp
        ex02/Zombie.h
        ex02/ZombieEvent.cpp
        ex02/ZombieEvent.h)
