cmake_minimum_required(VERSION 3.19)
project(module00)

set(CMAKE_CXX_STANDARD 14)

include_directories(ex00)
include_directories(ex01)

add_executable(ex01
        ex01/Contact.cpp
        ex01/Contact.h
        ex01/main.cpp
        ex01/PhoneBook.cpp
        ex01/PhoneBook.h)

add_executable(ex00
        ex00/megaphone.cpp
)