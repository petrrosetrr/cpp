//
// Created by petr on 27.06.2021.
//
#include <iostream>
#include "ClapTrap.h"

int main() {
	ClapTrap clapTrap("clapClapTrap");
	std::cout << std::endl;

	clapTrap.attack("someone");
	clapTrap.beRepaired(5);
	clapTrap.takeDamage(5);
	std::cout << std::endl;

	ClapTrap(clapTrap).takeDamage(10);
}
