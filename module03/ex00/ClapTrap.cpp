//
// Created by petr on 27.06.2021.
//

#include "ClapTrap.h"

ClapTrap::ClapTrap(std::string name)
: name(name),
hitPoints(10),
energyPoints(10),
attackDamage(0){
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &clapTrap) {
	std::cout << "Copy constructor called" << std::endl;
	*this = clapTrap;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &clapTrap) {
	std::cout << "Assignation operator called" << std::endl;
	if (this != &clapTrap) {
		this->name = clapTrap.name;
		this->hitPoints = clapTrap.hitPoints;
		this->energyPoints = clapTrap.energyPoints;
		this->attackDamage = clapTrap.attackDamage;
	}
	return *this;
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string &target) {
	std::cout << "ClapTrap " << this->name << " attacks " << target
	<< " causing " << this->attackDamage << " points of damage " << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << this->name << " takes "
	<< amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "ClapTrap " << this->name << " is repaired for " << amount << " points!" << std::endl;
}

