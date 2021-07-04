//
// Created by Jimmie Alease on 7/3/21.
//

#ifndef MODULE03_BUREAUCRAT_HPP
#define MODULE03_BUREAUCRAT_HPP
#include <iostream>

class Bureaucrat {
private:
	const std::string name;
	int grade;
	Bureaucrat();
public:
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat & bureaucrat);
	Bureaucrat & operator=(const Bureaucrat & bureaucrat);
	virtual ~Bureaucrat();

	const std::string & getName() const;
	int getGrade() const;
	void incGrade();
	void decGrade();

	class GradeTooHighException : public std::exception {
	public:
		virtual const char* what() const throw();
	};

	class GradeTooLowException : public std::exception {
	public:
		virtual const char* what() const throw();
	};
};

std::ostream & operator<<(std::ostream & out, Bureaucrat & bureaucrat);

#endif //MODULE03_BUREAUCRAT_HPP
