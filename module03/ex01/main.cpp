//
// Created by petr on 27.06.2021.
//
#include <iostream>
#include "ClapTrap.h"

int main() {
	ClapTrap clapTrap("clapClapTrap");

	clapTrap.attack("someone");
	clapTrap.beRepaired(5);
	clapTrap.takeDamage(5);

	ClapTrap(clapTrap).takeDamage(10);
}
