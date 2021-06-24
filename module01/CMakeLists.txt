cmake_minimum_required(VERSION 3.19)
project(module01)

set(CMAKE_CXX_STANDARD 14)

include_directories(ex00)
add_executable(ex00
        ex00/main.cpp
        ex00/newZombie.cpp
        ex00/randomChump.cpp
        ex00/Zombie.cpp
        ex00/Zombie.h)

include_directories(ex01)
add_executable(ex01
        ex01/main.cpp
        ex01/Zombie.cpp
        ex01/Zombie.h
        ex01/ZombieHorde.cpp)

include_directories(ex02)
add_executable(ex02
        ex02/main.cpp)

include_directories(ex03)
add_executable(ex03
        ex03/main.cpp
        ex03/Weapon.cpp
        ex03/Weapon.h
        ex03/HumanA.cpp
        ex03/HumanA.h
        ex03/HumanB.cpp
        ex03/HumanB.h)

include_directories(ex04)
add_executable(ex04
        ex04/main.cpp
        ex04/Sed.cpp
        ex04/Sed.h)