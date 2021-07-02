//
// Created by Jimmie Alease on 7/2/21.
//

#include "Ice.h"

Ice::Ice() : AMateria("ice") {}

Ice::~Ice() {}

Ice *Ice::clone() const {
	return new Ice(*this);
}

void Ice::use(ICharacter &target) {
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
