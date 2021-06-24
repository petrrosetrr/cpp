//
// Created by petr on 24.06.2021.
//

#ifndef MODULE01_HUMANB_H
#define MODULE01_HUMANB_H
#include <iostream>
#include "Weapon.h"

class HumanB {
private:
	HumanB();
	std::string name;
	Weapon * weapon;
public:
	explicit HumanB(std::string name);
	void attack();
	void setWeapon(Weapon & weapon);
};


#endif //MODULE01_HUMANB_H
