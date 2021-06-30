//
// Created by Jimmie Alease on 6/29/21.
//

#include "PlasmaRifle.h"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21) {}

PlasmaRifle::~PlasmaRifle() {}

void PlasmaRifle::attack() const {
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &plasmaRifle) : AWeapon(plasmaRifle) {}

