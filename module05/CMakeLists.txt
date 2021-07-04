cmake_minimum_required(VERSION 3.19)
project(module05)

set(CMAKE_CXX_STANDARD 98)

include_directories(ex00)
add_executable(ex00
        ex00/Bureaucrat.cpp
        ex00/Bureaucrat.hpp
        ex00/main.cpp)

include_directories(ex01)
add_executable(ex01
        ex01/Form.cpp
        ex01/Form.hpp
        ex01/Bureaucrat.cpp
        ex01/Bureaucrat.hpp
        ex01/main.cpp)

include_directories(ex02)
add_executable(ex02
        ex02/PresidentialPardonForm.cpp
        ex02/PresidentialPardonForm.hpp
        ex02/RobotomyRequestForm.cpp
        ex02/RobotomyRequestForm.hpp
        ex02/ShrubberyCreationForm.cpp
        ex02/ShrubberyCreationForm.hpp
        ex02/Form.cpp
        ex02/Form.hpp
        ex02/Bureaucrat.cpp
        ex02/Bureaucrat.hpp
        ex02/main.cpp)