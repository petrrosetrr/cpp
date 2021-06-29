//
// Created by petr on 27.06.2021.
//

#ifndef MODULE03_SCAVTRAP_H
#define MODULE03_SCAVTRAP_H
#include <iostream>
#include "ClapTrap.h"

class ScavTrap : virtual public ClapTrap{
public:
	explicit ScavTrap(std::string name);
	void attack(std::string const & target);
	~ScavTrap();
	void guardGate();
};


#endif //MODULE03_SCAVTRAP_H
