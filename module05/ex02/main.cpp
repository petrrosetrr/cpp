//
// Created by Jimmie Alease on 7/3/21.
//
#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main() {
	Bureaucrat b("Bureaucrat", 1);

	ShrubberyCreationForm shrubberyForm("home");

	b.signForm(shrubberyForm);
	b.executeForm(shrubberyForm);
}