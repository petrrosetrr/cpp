//
// Created by Jimmie Alease on 6/30/21.
//

#include "TacticalMarine.h"

TacticalMarine::TacticalMarine() {
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::~TacticalMarine() {
	std::cout << "Aaargh..." << std::endl;
}

TacticalMarine::TacticalMarine(const TacticalMarine &tacticalMarine) {
	std::cout << "Tactical Marine ready for battle!" << std::endl;
	*this = tacticalMarine;
}

TacticalMarine &TacticalMarine::operator=(const TacticalMarine &tacticalMarine) {
	return *this;
};

void TacticalMarine::battleCry() const {
	std::cout << "For the holy PLOT!" << std::endl;
}

void TacticalMarine::rangedAttack() const {
	std::cout << "* attacks with a bolter *" << std::endl;
}

void TacticalMarine::meleeAttack() const {
	std::cout << "* attacks with a chainsword *" << std::endl;
}

ISpaceMarine *TacticalMarine::clone() const {
	return new TacticalMarine;
}
