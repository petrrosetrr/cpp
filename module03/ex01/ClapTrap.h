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
protected:
	ClapTrap(std::string name, unsigned int hitPoints,
			unsigned int energyPoints, unsigned int attackDamage);
	void setHitPoints(unsigned int hitPoints);
	void setEnergyPoints(unsigned int energyPoints);
	void setAttackDamage(unsigned int attackDamage);
	unsigned int getHitPoints() const;
	unsigned int getEnergyPoints() const;
	unsigned int getAttackDamage() const;
	const std::string & getName() const;
	void setName(std::string name);

public:
	explicit ClapTrap(std::string name);
	ClapTrap(const ClapTrap & clapTrap);
	ClapTrap & operator=(const ClapTrap &clapTrap);
	virtual ~ClapTrap();

	virtual void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};


#endif //MODULE00_CLAPTRAP_H
