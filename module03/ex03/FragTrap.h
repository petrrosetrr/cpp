//
// Created by petr on 27.06.2021.
//

#ifndef MODULE03_FRAGTRAP_H
#define MODULE03_FRAGTRAP_H
#include <iostream>
#include "ClapTrap.h"

class FragTrap : virtual public ClapTrap{
protected:
	FragTrap();
public:
	explicit FragTrap(std::string name);

	~FragTrap();
	void highFivesGuys();
};


#endif //MODULE03_FRAGTRAP_H
