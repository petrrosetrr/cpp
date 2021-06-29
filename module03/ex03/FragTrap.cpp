//
// Created by petr on 27.06.2021.
//

#include "FragTrap.h"

FragTrap::FragTrap(std::string name) :
		ClapTrap(name, 100, 100, 30) {
	std::cout << "FragTrap: Default constructor called" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap: Destructor called" << std::endl;
}

void FragTrap::highFivesGuys() {
	std::cout  << "FragTrap " << this->getName() << " says gimmie high five 👋" << std::endl;
}
