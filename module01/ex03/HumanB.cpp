//
// Created by petr on 24.06.2021.
//

#include "HumanB.h"

HumanB::HumanB(std::string name) : name(name), weapon(nullptr) {}

void HumanB::attack() {
	std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon) {
	this->weapon = &weapon;
}
