//
// Created by Jimmie Alease on 7/4/21.
//

#ifndef MODULE05_PRESIDENTIALPARDONFORM_HPP
#define MODULE05_PRESIDENTIALPARDONFORM_HPP
#include <iostream>
#include "Form.hpp"

class PresidentialPardonForm : public Form {
private:
	const std::string target;
	PresidentialPardonForm();
	PresidentialPardonForm & operator=(const PresidentialPardonForm & pardonForm);
public:
	explicit PresidentialPardonForm(std::string target);
	~PresidentialPardonForm();
	PresidentialPardonForm(const PresidentialPardonForm & pardonForm);
	void execute(Bureaucrat const &executor) const;
};


#endif //MODULE05_PRESIDENTIALPARDONFORM_HPP
