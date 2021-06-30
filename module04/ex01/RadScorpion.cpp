//
// Created by Jimmie Alease on 6/29/21.
//

#include "RadScorpion.h"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion"){
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion() {
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion &radScorpion) : Enemy(80, "RadScorpion") {
	std::cout << "* click click click *" << std::endl;
}
