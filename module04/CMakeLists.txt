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
        ex00/SomeOtherDerivedClass.cpp
        ex00/SomeOtherDerivedClass.h
        ex00/main.cpp)

include_directories(ex01)
add_executable(ex01
        ex01/AWeapon.cpp
        ex01/AWeapon.h
        ex01/PlasmaRifle.h
        ex01/PlasmaRifle.cpp
        ex01/PowerFist.cpp
        ex01/PowerFist.h
        ex01/Enemy.cpp
        ex01/Enemy.h
        ex01/SuperMutant.cpp
        ex01/SuperMutant.h
        ex01/RadScorpion.cpp
        ex01/RadScorpion.h
        ex01/Character.cpp
        ex01/Character.h
        ex01/main.cpp)

include_directories(ex02)
add_executable(ex02
        ex02/Squad.cpp
        ex02/Squad.h
        ex02/TacticalMarine.h
        ex02/TacticalMarine.cpp
        ex02/AssaultTerminator.cpp
        ex02/AssaultTerminator.h
        ex02/ISpaceMarine.h
        ex02/ISquad.h
        ex02/main.cpp)

include_directories(ex03)
add_executable(ex03
        ex03/AMateria.cpp
        ex03/AMateria.h
        ex03/Character.cpp
        ex03/Character.h
        ex03/Cure.cpp
        ex03/Cure.h
        ex03/Ice.cpp
        ex03/Ice.h
        ex03/ICharacter.h
        ex03/IMateriaSource.h
        ex03/MateriaSource.cpp
        ex03/MateriaSource.h
        ex03/main.cpp)
