//
// Created by petr on 29.06.2021.
//

#include "Victim.h"

Victim::Victim(std::string name) : name(name) {
	std::cout << "Some random victim called " << this->name << " just appeared!" << std::endl;
}

Victim::Victim(const Victim &victim) {
	*this = victim;
}

Victim &Victim::operator=(const Victim &victim) {
	if (this != &victim) {
		this->name = victim.name;
	}
	return *this;
}

Victim::~Victim() {
	std::cout << "Victim " << this->name <<  " just died for no apparent reason!" << std::endl;
}

void Victim::getPolymorphed() const {
	std::cout << this->name << " has been turned into a cute little sheep" << std::endl;
}

const std::string &Victim::getName() const {
	return this->name;
}

std::ostream & operator<<(std::ostream & out, const Victim & victim) {
	out << "I'm " << victim.getName() << " and I like otters!" << std::endl;
	return out;
}
