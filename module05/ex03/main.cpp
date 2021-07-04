//
// Created by Jimmie Alease on 7/3/21.
//
#include <iostream>
#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main() {
	Intern i;

	Form * f = i.makeForm("robotomy request", "aaa");
	std::cout << f->getName() << std::endl;
}