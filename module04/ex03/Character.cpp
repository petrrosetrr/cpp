//
// Created by Jimmie Alease on 7/2/21.
//

#include "Character.h"

Character::Character(std::string name) : name(name) {
	for (int i = 0; i < 4; ++i) {
		materia[i] = nullptr;
	}
}

Character::Character(const Character & character) {
	*this = character;
}

Character & Character::operator=(const Character &character) {
	if (this != &character) {
		this->name = character.name;
		for(int i = 0; i < 4; ++i) {
			delete materia[i];
			materia[i] = character.materia[i];
		}
	}
	return *this;
}

Character::~Character() {
	for(int i = 0; i < 4; ++i) {
		delete materia[i];
		materia[i] = nullptr;
	}
}

const std::string & Character::getName() const {
	return this->name;
}

void Character::equip(AMateria *m) {
	for (int i = 0; i < 4; ++i) {
		if (!materia[i]) {
			materia[i] = m;
			return;
		}
	}
}

void Character::unequip(int idx) {
	if (idx >= 0 && idx <= 3) {
		materia[idx] = nullptr;
	}
}

void Character::use(int idx, ICharacter &target) {
	if (idx >= 0 && idx <= 3 && materia[idx]) {
		materia[idx]->use(target);
	}
}
