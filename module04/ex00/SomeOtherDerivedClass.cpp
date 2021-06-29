//
// Created by Jimmie Alease on 6/29/21.
//

#include "SomeOtherDerivedClass.h"

SomeOtherDerivedClass::SomeOtherDerivedClass(std::string name) : Victim(name) {
	std::cout << "Hi my name is " << this->getName() << std::endl;
}

void SomeOtherDerivedClass::getPolymorphed() const {
	std::cout << this->getName() << " has been turned into a black pony!" << std::endl;
}

SomeOtherDerivedClass::~SomeOtherDerivedClass() {
	std::cout << this->getName() << ": Bye.." << std::endl;
}
