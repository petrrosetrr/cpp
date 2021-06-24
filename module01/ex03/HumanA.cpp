//
// Created by petr on 24.06.2021.
//

#include "HumanA.h"

void HumanA::attack() {
	std::cout << this->name << " attacks with his " << this->weapon.getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon & weapon) : name(name), weapon(weapon){}
