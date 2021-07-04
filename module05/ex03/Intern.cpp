//
// Created by Jimmie Alease on 7/4/21.
//

#include "Intern.hpp"

Intern::Intern() {}

Intern::~Intern() {}

Intern::Intern(const Intern &intern) {
	(void) intern;
}

Intern &Intern::operator=(const Intern &intern) {
	(void) intern;
	return *this;
}

Form * generatePresidentalPardon(std::string name) {
	return new PresidentialPardonForm(name);
}

Form * generateRobotomyRequest(std::string name) {
	return new RobotomyRequestForm(name);
}

Form * generateShrubberyCreation(std::string name) {
	return new ShrubberyCreationForm(name);
}

typedef Form *(*formCreator) (std::string);

typedef struct {
	std::string	name;
	formCreator creator;
}	pair;

Form *Intern::makeForm(std::string formName, std::string formTarget) const{
	pair pairs[] = {
			{"presidental pardon", &generatePresidentalPardon},
			{"robotomy request", &generateRobotomyRequest},
			{"shrubbery creation", &generateShrubberyCreation}
	};
	for(int i = 0; i < 3; ++i) {
		if (formName == pairs[i].name) {
			return pairs[i].creator(formTarget);
		}
	}
	throw FormNotFoundException();
}

const char *Intern::FormNotFoundException::what() const throw() {
	return "Form not found";
}
