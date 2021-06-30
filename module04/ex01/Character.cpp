//
// Created by Jimmie Alease on 6/29/21.
//

#include "Character.h"

Character::Character(const std::string &name) : name(name), ap(40), weapon(nullptr) {}

Character::Character(const Character &character)
: name(character.name), ap(character.ap), weapon(character.weapon) {}

Character &Character::operator=(const Character &character) {
	if (this != &character) {
		this->name = character.name;
		this->ap = character.ap;
		this->weapon = character.weapon;
	}
	return *this;
}

Character::~Character() {}

void Character::recoverAP() {
	this->ap += 10;
	if (ap > 40) {
		ap = 40;
	}
}

void Character::equip(AWeapon * weapon) {
	this->weapon = weapon;
}

void Character::attack(Enemy *enemy) {
	if (this->weapon && this->ap >= this->weapon->getAPCost()) {
		std::cout << this->name << " attacks " << enemy->getType() << " with a "
		<< weapon->getName() << std::endl;
		this->ap -= weapon->getAPCost();
		weapon->attack();
		enemy->takeDamage(weapon->getDamage());
		if (enemy->getHP() <= 0) {
			delete enemy;
		}
	}
}

const std::string &Character::getName() const {
	return this->name;
}

int Character::getAp() const {
	return this->ap;
}

const AWeapon *Character::getWeapon() const {
	return this->weapon;
}

std::ostream & operator<<(std::ostream & out, const Character & character) {
	out << character.getName() << " has " << character.getAp() << " AP and "
	<< (character.getWeapon() ? ("wields a " + character.getWeapon()->getName()) : "is unarmed")
	<< std::endl;
	return out;
}