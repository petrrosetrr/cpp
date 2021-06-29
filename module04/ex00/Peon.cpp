//
// Created by petr on 29.06.2021.
//

#include "Peon.h"

Peon::Peon(std::string name) : Victim(name) {
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon() {
	std::cout << "Bleuark..." << std::endl;
}

void Peon::getPolymorphed() const {
	std::cout << this->getName() << " has been turned into a pink pony!" << std::endl;
}
