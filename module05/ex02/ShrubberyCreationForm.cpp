//
// Created by Jimmie Alease on 7/4/21.
//

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
: Form("ShrubberyCreationForm", 145, 137), target(target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &shrubberyCreationForm)
: Form(shrubberyCreationForm.getName(),
shrubberyCreationForm.getGradeToSign(), shrubberyCreationForm.getGradeToExec()),
target(shrubberyCreationForm.target){}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
	Form::execute(executor);
	std::ofstream ofstream(this->target + "_shrubbery");
	ofstream << tree << std::endl;
//	ofstream.close();
}

const std::string ShrubberyCreationForm::tree = "        # #### ####\n"
												"      ### \\/#|### |/####\n"
												"     ##\\/#/ \\||/##/_/##/_#\n"
												"   ###  \\/###|/ \\/ # ###\n"
												" ##_\\_#\\_\\## | #/###_/_####\n"
												"## #### # \\ #| /  #### ##/##\n"
												" __#_--###`  |{,###---###-~\n"
												"           \\ }{\n"
												"            }}{\n"
												"            }}{\n"
												"       ejm  {{}\n"
												"      , -=-~{ .-^- _\n"
												"            `}\n"
												"             {\n"
												"\n"
												"------------------------------------------------\n"
												"Thank you for visiting https://asciiart.website/\n"
												"This ASCII pic can be found at\n"
												"https://asciiart.website/index.php?art=plants/trees";