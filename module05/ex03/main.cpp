//
// Created by Jimmie Alease on 7/3/21.
//
#include <iostream>
#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main() {
	Intern i;
	Bureaucrat b("BUR", 1);
	{
		Form * f = i.makeForm("robotomy request", "bup");
		b.signForm(*f);
		b.executeForm(*f);
		delete f;
	}

	{
		Form * f = i.makeForm("presidental pardon", "huh");
		b.signForm(*f);
		b.executeForm(*f);
		delete f;
	}

	{
		Form * f = i.makeForm("shrubbery creation", "pep");
		b.signForm(*f);
		b.executeForm(*f);
		delete f;
	}

	try {
		Form * f = i.makeForm("exception", "pep");
		b.signForm(*f);
		b.executeForm(*f);
		delete f;
	} catch (std::exception & e) {
		std::cout << "Caught exception: " << e.what() << std::endl;
	}
}