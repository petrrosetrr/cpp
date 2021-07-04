//
// Created by Jimmie Alease on 7/3/21.
//

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name){
	if (grade > 150) {
		throw GradeTooLowException();
	} else if (grade < 1) {
		throw GradeTooHighException();
	} else {
		this->grade = grade;
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat)
: name(bureaucrat.name), grade(bureaucrat.grade) {}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat & bureaucrat) {
	if (this != &bureaucrat) {
		this->grade = bureaucrat.grade;
	}
	return *this;
}

Bureaucrat::~Bureaucrat() {}

const std::string &Bureaucrat::getName() const {
	return this->name;
}

int Bureaucrat::getGrade() const {
	return this->grade;
}

void Bureaucrat::incGrade() {
	if (this->grade == 1) {
		throw GradeTooHighException();
	} else {
		grade--;
	}
}

void Bureaucrat::decGrade() {
	if (this->grade == 150) {
		throw GradeTooLowException();
	} else {
		grade++;
	}
}

void Bureaucrat::signForm(Form &form) {
	try {
		form.beSigned(*this);
		std::cout << this->name << " signs form " << form.getName() << std::endl;
	} catch(std::exception & exception){
		std::cout << this->name <<  " cannot sing form " << form.getName() << " because " << exception.what() << std::endl;
	}
}

void Bureaucrat::executeForm(const Form &form) {
	try {
		form.execute(*this);
		std::cout << this->name << " executes " << form.getName() << std::endl;
	} catch(std::exception & exception) {
		std::cout << this->name << " cannot execute form " << form.getName() << " because " << exception.what() << std::endl;
	}
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return "Maximum grade is 1";
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return "Minimum grade is 150";
}

std::ostream & operator<<(std::ostream & out, Bureaucrat & bureaucrat) {
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return out;
}