//
// Created by Jimmie Alease on 7/2/21.
//

#include "Cure.h"

Cure::Cure() : AMateria("cure"){}

Cure::~Cure() {}

Cure *Cure::clone() const {
	return new Cure(*this);
}

void Cure::use(ICharacter &target) {
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
