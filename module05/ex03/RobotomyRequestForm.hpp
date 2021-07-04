//
// Created by Jimmie Alease on 7/4/21.
//

#ifndef MODULE05_ROBOTOMYREQUESTFORM_HPP
#define MODULE05_ROBOTOMYREQUESTFORM_HPP
#include <iostream>
#include "Form.hpp"

class RobotomyRequestForm : public Form {
private:
	const std::string target;
	RobotomyRequestForm();
	RobotomyRequestForm & operator=(const RobotomyRequestForm & requestForm);
public:
	explicit RobotomyRequestForm(std::string target);
	~RobotomyRequestForm();
	RobotomyRequestForm(const RobotomyRequestForm & requestForm);
	void execute(Bureaucrat const &executor) const;
};


#endif //MODULE05_ROBOTOMYREQUESTFORM_HPP
