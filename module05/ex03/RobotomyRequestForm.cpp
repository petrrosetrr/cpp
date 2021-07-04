//
// Created by Jimmie Alease on 7/4/21.
//

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target)
:Form("RobotomyRequestForm", 72, 45), target(target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &requestForm)
: Form(requestForm.getName(),
requestForm.getGradeToSign(), requestForm.getGradeToExec()),  target(requestForm.target) {}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
	Form::execute(executor);
	std::cout << "* making drilling noises *" << std::endl;
	std::cout << "💥💥💥💥💥💥💥💥💥💥💥💥💥💥💥" << std::endl;
	srand(time(0));
	if ((rand() % 100) + 1 >= 50) {
		std::cout << this->target << " has been robotomized successfully🙃" << std::endl;
	} else {
		std::cout << this->target << " hasn't been robotomized😢" << std::endl;
	}
}

