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

include_directories(ex03)
add_executable(ex03
        ex03/Intern.cpp
        ex03/Intern.hpp
        ex03/PresidentialPardonForm.cpp
        ex03/PresidentialPardonForm.hpp
        ex03/RobotomyRequestForm.cpp
        ex03/RobotomyRequestForm.hpp
        ex03/ShrubberyCreationForm.cpp
        ex03/ShrubberyCreationForm.hpp
        ex03/Form.cpp
        ex03/Form.hpp
        ex03/Bureaucrat.cpp
        ex03/Bureaucrat.hpp
        ex03/main.cpp)