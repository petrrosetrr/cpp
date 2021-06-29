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
	this->setName(this->name + "_clap_name");
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
}

