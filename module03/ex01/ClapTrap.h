//
// Created by petr on 27.06.2021.
//

#ifndef MODULE00_CLAPTRAP_H
#define MODULE00_CLAPTRAP_H
#include <iostream>

class ClapTrap {
private:
	std::string name;
	unsigned int hitPoints;
	unsigned int energyPoints;
	unsigned int attackDamage;
public:
	explicit ClapTrap(std::string name);
	ClapTrap(const ClapTrap & clapTrap);
	ClapTrap & operator=(const ClapTrap &clapTrap);
	virtual ~ClapTrap();

	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};


#endif //MODULE00_CLAPTRAP_H
