//
// Created by petr on 29.06.2021.
//

#include "DiamondTrap.h"

void DiamondTrap::whoAmI() {
	std::cout << "DiamondTrap: my inherited name is: " << this->getName() << std::endl;
	std::cout << "DiamondTrap: my own name is: " << this->name << std::endl;

}

DiamondTrap::DiamondTrap(std::string name)
: ClapTrap(name), FragTrap(name), ScavTrap(name), name(name) {
	std::cout << "DiamondTrap: Default constructor called" << std::endl;
	this->setName(this->name + "_clap_name");
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap: Destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &diamondTrap)
: ClapTrap(diamondTrap), FragTrap(diamondTrap), ScavTrap(diamondTrap) {
	std::cout << "DiamondTrap: Copy constructor called" << std::endl;
	*this = diamondTrap;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &diamondTrap) {
	std::cout << "DiamondTrap: Assignation operator called" << std::endl;
	if (this != &diamondTrap) {
		this->name = diamondTrap.name;
	}
	return *this;
}
