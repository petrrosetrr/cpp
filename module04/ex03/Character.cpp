//
// Created by Jimmie Alease on 7/2/21.
//

#include "Character.h"

Character::Character(std::string name) : name(name) {
	for (int i = 0; i < 4; ++i) {
		materia[i] = nullptr;
	}
}

Character::~Character() {}

const std::string & Character::getName() const {
	return this->name;
}

void Character::equip(AMateria *m) {
	
}

void Character::unequip(int idx) {

}
