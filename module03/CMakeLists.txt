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
        ex01/main.cpp)

include_directories(ex02)
add_executable(ex02
        ex02/ClapTrap.cpp
        ex02/ClapTrap.h
        ex02/ScavTrap.cpp
        ex02/ScavTrap.h
        ex02/FragTrap.cpp
        ex02/FragTrap.h
        ex02/main.cpp)

include_directories(ex03)
add_executable(ex03
        ex03/ClapTrap.cpp
        ex03/ClapTrap.h
        ex03/ScavTrap.cpp
        ex03/ScavTrap.h
        ex03/FragTrap.cpp
        ex03/FragTrap.h
        ex03/DiamondTrap.cpp
        ex03/DiamondTrap.h
        ex03/main.cpp)