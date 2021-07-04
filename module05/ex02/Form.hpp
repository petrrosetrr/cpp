//
// Created by Jimmie Alease on 7/4/21.
//

#ifndef MODULE05_FORM_HPP
#define MODULE05_FORM_HPP
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form {
private:
	const std::string name;
	const int gradeToSign;
	const int gradeToExec;
	bool isSigned;
	Form();
	Form & operator=(const Form & form);
public:
	Form(std::string name, int gradeToSign, int gradeToExec);
	Form(const Form & form);
	~Form();

	const std::string & getName() const;
	int getGradeToExec() const;
	int getGradeToSign() const;
	bool getSigned() const;
	void beSigned(const Bureaucrat & bureaucrat);

	class GradeTooHighException : public std::exception {
	public:
		virtual const char* what() const throw();
	};

	class GradeTooLowException : public std::exception {
	public:
		virtual const char* what() const throw();
	};
};

std::ostream & operator<<(std::ostream & out, const Form & form);

#endif //MODULE05_FORM_HPP
