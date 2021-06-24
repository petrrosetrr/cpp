//
// Created by petr on 24.06.2021.
//

#ifndef MODULE01_HUMANA_H
#define MODULE01_HUMANA_H
#include <iostream>
#include "Weapon.h"

class HumanA {
private:
	HumanA();
	std::string name;
	Weapon & weapon;
public:
	HumanA(std::string name, Weapon & weapon);
	void attack();
};


#endif //MODULE01_HUMANA_H
