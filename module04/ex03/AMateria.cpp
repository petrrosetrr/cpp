//
// Created by Jimmie Alease on 7/2/21.
//

#include "AMateria.h"

AMateria::AMateria(const std::string &type) : type(type), xp(0) {}

AMateria::AMateria(const AMateria &aMateria) : type(aMateria.type), xp(aMateria.xp) {}

AMateria &AMateria::operator=(const AMateria &aMateria) {
	if (this != &aMateria) {
		this->xp = aMateria.xp;
	}
	return *this;
}

AMateria::~AMateria() {}

const std::string &AMateria::getType() const {
	return this->type;
}

unsigned int AMateria::getXP() const {
	return this->xp;
}

void AMateria::use(ICharacter &target) {
	xp += 10;
}
