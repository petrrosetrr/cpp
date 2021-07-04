//
// Created by Jimmie Alease on 7/4/21.
//

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target)
: Form("PresidentialPardonForm", 25, 5),
target(target){}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &pardonForm)
:Form(pardonForm.getName(),
pardonForm.getGradeToSign(), pardonForm.getGradeToExec()),
target(pardonForm.target){}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const {
	Form::execute(executor);
	std::cout << this->target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
