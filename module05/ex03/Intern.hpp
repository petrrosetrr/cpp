//
// Created by Jimmie Alease on 7/4/21.
//

#ifndef MODULE05_INTERN_HPP
#define MODULE05_INTERN_HPP
#include <iostream>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {
public:
	Intern();
	virtual ~Intern();
	Intern(const Intern & intern);
	Intern & operator=(const Intern & intern);
	Form *makeForm(std::string formType, std::string formTarget) const;

	class FormNotFoundException : public std::exception {
	public:
		virtual const char* what() const throw();
	};
};


#endif //MODULE05_INTERN_HPP
