//
// Created by Jimmie Alease on 7/3/21.
//
#include <iostream>
#include "Bureaucrat.hpp"

int main() {
//	{
//		Bureaucrat b("b", 150);
//		b.incGrade();
//		b.incGrade();
//		std::cout << b << std::endl;
//		b.decGrade();
//		std::cout << b << std::endl;
//	}
//
//	try {
//		Bureaucrat b("b", 180);
//	} catch (std::exception & exception) {
//		std::cout << exception.what() << std::endl;
//	}
//
//	try {
//		Bureaucrat b("b", 0);
//	} catch (std::exception & exception) {
//		std::cout << exception.what() << std::endl;
//	}
//
//	try {
//		Bureaucrat b("b", 150);
//		b.decGrade();
//	} catch (std::exception & exception) {
//		std::cout << exception.what() << std::endl;
//	}
//
//	try {
//		Bureaucrat b("b", 1);
//		b.incGrade();
//	} catch (std::exception & exception) {
//		std::cout << exception.what() << std::endl;
//	}

	try {
		Form form("form", 151, 12);
	}
	catch (std::exception & e) {
		std::cout << "Caught exception: " << e.what() << std::endl;
	}

	try {
		Form form("form", 10, 0);
	}
	catch (std::exception & e) {
		std::cout << "Caught exception: " << e.what() << std::endl;
	}

	{
		Bureaucrat bureaucrat("bureaucrat", 10);
		Form form("test", 10, 45);
		bureaucrat.signForm(form);
		std::cout << form << std::endl;
	}

	{
		Bureaucrat bureaucrat("bureaucrat", 100);
		Form form("test", 10, 45);
		bureaucrat.signForm(form);
		std::cout << form << std::endl;
	}
}