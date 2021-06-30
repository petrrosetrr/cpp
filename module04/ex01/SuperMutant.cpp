//
// Created by Jimmie Alease on 6/29/21.
//

#include "SuperMutant.h"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant"){
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

void SuperMutant::takeDamage(int damage) {
	Enemy::takeDamage(damage - 3);
}

SuperMutant::~SuperMutant() {
	std::cout << "Aaargh..." << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant &superMutant) : Enemy(170, "Super Mutant"){
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

