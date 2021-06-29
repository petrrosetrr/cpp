//
// Created by petr on 29.06.2021.
//

#ifndef MODULE03_DIAMONDTRAP_H
#define MODULE03_DIAMONDTRAP_H
#include <iostream>
#include "FragTrap.h"
#include "ScavTrap.h"

class DiamondTrap : public FragTrap, public ScavTrap{
private:
	std::string name;
public:
	explicit DiamondTrap(std::string name);
	void whoAmI();
};


#endif //MODULE03_DIAMONDTRAP_H
