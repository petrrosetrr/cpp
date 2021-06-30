//
// Created by Jimmie Alease on 6/30/21.
//

#include "AssaultTerminator.h"

AssaultTerminator::AssaultTerminator() {
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::~AssaultTerminator() {
	std::cout << "I’ll be back..." << std::endl;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator & assaultTerminator) {
	*this = assaultTerminator;
}

AssaultTerminator  & AssaultTerminator::operator=(const AssaultTerminator & assaultTerminator) {
	return *this;
}

ISpaceMarine *AssaultTerminator::clone() const {
	return new AssaultTerminator;
}

void AssaultTerminator::battleCry() const {
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;

}

void AssaultTerminator::rangedAttack() const {
	std::cout << "* does nothing *" << std::endl;

}

void AssaultTerminator::meleeAttack() const {
	std::cout << "* attacks with chainfists *" << std::endl;
}
