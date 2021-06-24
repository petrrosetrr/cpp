//
// Created by petr on 24.06.2021.
//

#include "Weapon.h"

Weapon::Weapon(std::string type) {
	this->type = type;
}

std::string Weapon::getType() {
	return this->type;
}

void Weapon::setType(std::string type) {
	this->type = type;
}
