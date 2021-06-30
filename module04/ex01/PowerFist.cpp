//
// Created by Jimmie Alease on 6/29/21.
//

#include "PowerFist.h"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50){}

PowerFist::PowerFist(const PowerFist &powerFist) : AWeapon(powerFist) {}

PowerFist::~PowerFist() {}

void PowerFist::attack() const{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
