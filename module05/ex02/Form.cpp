//
// Created by Jimmie Alease on 7/4/21.
//

#include "Form.hpp"

Form::Form(std::string name, int gradeToSign, int gradeToExec) :
name(name), gradeToSign(gradeToSign), gradeToExec(gradeToExec){
	if (gradeToExec > 150 || gradeToSign > 150) {
		throw GradeTooLowException();
	} else if (gradeToExec < 1 || gradeToSign < 1) {
		throw GradeTooHighException();
	}
}

Form::Form(const Form &form)
: name(form.name), gradeToSign(form.gradeToSign), gradeToExec(form.gradeToExec), isSigned(form.isSigned) {}

Form::~Form() {}

const std::string &Form::getName() const {
	return this->name;
}

int Form::getGradeToExec() const {
	return this->gradeToExec;
}

int Form::getGradeToSign() const {
	return this->gradeToSign;
}

void Form::beSigned(const Bureaucrat &bureaucrat) {
	if(bureaucrat.getGrade() <= this->getGradeToSign()) {
		this->isSigned = true;
	} else {
		throw GradeTooLowException();
	}
}

bool Form::getSigned() const {
	return this->isSigned;
}

void Form::execute(Bureaucrat const & executor) const {
	if (!this->isSigned) {
		throw FormIsNotSignedException();
	}
	if (executor.getGrade() >= this->gradeToExec) {
		throw GradeTooLowException();
	}
};

std::ostream & operator<<(std::ostream & out, const Form & form) {
	out << "Form " << form.getName() << (form.getSigned() ? " is signed" : " is not signed") << ", "
	<< "minimum grade to sign " << form.getGradeToSign() << ", minimum grade to execute " << form.getGradeToExec();
	return out;
}

const char *Form::GradeTooHighException::what() const throw() {
	return "Grade is too high";
}

const char *Form::GradeTooLowException::what() const throw() {
	return "Grade is too low";
}

const char *Form::FormIsNotSignedException::what() const throw() {
	return "Form is not signed";
}