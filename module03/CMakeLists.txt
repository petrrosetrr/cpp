cmake_minimum_required(VERSION 3.19)
project(module03)

set(CMAKE_CXX_STANDARD 14)

include_directories(ex00)
add_executable(ex00
        ex00/ClapTrap.cpp
        ex00/ClapTrap.h
        ex00/main.cpp)


include_directories(ex01)
add_executable(ex01
        ex01/ClapTrap.cpp
        ex01/ClapTrap.h
        ex01/ScavTrap.cpp
        ex01/ScavTrap.h
        ex00/main.cpp)