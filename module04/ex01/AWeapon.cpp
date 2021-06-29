//
// Created by Jimmie Alease on 6/29/21.
//

#include "AWeapon.h"

AWeapon::AWeapon(const std::string &name, int apcost, int damage) {

}

AWeapon::AWeapon(const AWeapon &aWeapon) {

}

AWeapon &AWeapon::operator=(const AWeapon &aWeapon) {
	return <#initializer#>;
}

AWeapon::~AWeapon() {

}

const std::string &AWeapon::getName() const {
	return <#initializer#>;
}

int AWeapon::getAPCost() const {
	return 0;
}

int AWeapon::getDamage() const {
	return 0;
}
