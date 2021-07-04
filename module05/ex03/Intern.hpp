//
// Created by Jimmie Alease on 7/4/21.
//

#ifndef MODULE05_INTERN_HPP
#define MODULE05_INTERN_HPP
#include <iostream>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {
private:
	typedef struct	pair {
		std::string	name;
		Form		*form;
	}				pair;
	pair forms[3];
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
