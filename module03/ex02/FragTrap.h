//
// Created by petr on 27.06.2021.
//

#ifndef MODULE03_FRAGTRAP_H
#define MODULE03_FRAGTRAP_H
#include <iostream>
#include "ClapTrap.h"

class FragTrap : public ClapTrap{
public:
	explicit FragTrap(std::string name);

	~FragTrap();
	void highFivesGuys();
};


#endif //MODULE03_FRAGTRAP_H
