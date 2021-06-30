//
// Created by Jimmie Alease on 6/29/21.
//

#include "AWeapon.h"

AWeapon::AWeapon(const std::string &name, int apcost, int damage) : name(name), apCost(apcost), damagePoints(damage) {}

AWeapon::AWeapon(const AWeapon &aWeapon) {
	*this = aWeapon;
}

AWeapon &AWeapon::operator=(const AWeapon &aWeapon) {
	std::cout << "AWeapon" << std::endl;
	if (this != &aWeapon) {
		this->name = aWeapon.name;
		this->apCost = aWeapon.apCost;
		this->damagePoints = aWeapon.damagePoints;
	}
	return *this;
}

AWeapon::~AWeapon() {}

const std::string &AWeapon::getName() const {
	return this->name;
}

int AWeapon::getAPCost() const {
	return this->apCost;
}

int AWeapon::getDamage() const {
	return this->damagePoints;
}
