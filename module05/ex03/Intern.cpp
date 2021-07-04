//
// Created by Jimmie Alease on 7/4/21.
//

#include "Intern.hpp"

Intern::Intern() {

}

Intern::~Intern() {}

Intern::Intern(const Intern &intern) {}

Intern &Intern::operator=(const Intern &intern) {
	return *this;
}

Form *Intern::makeForm(std::string formType, std::string formTarget) const{

}

const char *Intern::FormNotFoundException::what() const throw() {
	return "Form not found";
}
