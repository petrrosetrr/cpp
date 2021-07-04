//
// Created by Jimmie Alease on 7/4/21.
//

#ifndef MODULE05_SHRUBBERYCREATIONFORM_HPP
#define MODULE05_SHRUBBERYCREATIONFORM_HPP
#include <iostream>
#include <fstream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form{
private:
	static const std::string tree;
	const std::string target;
	ShrubberyCreationForm();
	ShrubberyCreationForm & operator=(const ShrubberyCreationForm & shrubberyCreationForm);
public:
	explicit ShrubberyCreationForm(std::string target);
	~ShrubberyCreationForm();
	ShrubberyCreationForm(const ShrubberyCreationForm & shrubberyCreationForm);
	void execute(Bureaucrat const &executor) const;
};


#endif //MODULE05_SHRUBBERYCREATIONFORM_HPP
