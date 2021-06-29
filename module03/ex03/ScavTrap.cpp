//
// Created by petr on 27.06.2021.
//

#include "ScavTrap.h"

ScavTrap::ScavTrap(std::string name) :
ClapTrap(name, 100, 50, 20) {
	std::cout << "ScavTrap: Default constructor called" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap: Destructor called" << std::endl;
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << ClapTrap::getName() << " have entered in Gatekeeper mode" << std::endl;
}

