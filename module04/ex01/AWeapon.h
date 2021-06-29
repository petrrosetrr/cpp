//
// Created by Jimmie Alease on 6/29/21.
//

#ifndef MODULE04_AWEAPON_H
#define MODULE04_AWEAPON_H
#include <iostream>

class AWeapon {
protected:
	std::string name;
	int apCost;
	int damagePoints;
public:
	AWeapon(std::string const & name, int apcost, int damage);
	AWeapon(const AWeapon & aWeapon);
	AWeapon & operator=(const AWeapon & aWeapon);
	virtual ~AWeapon();
	const std::string & getName() const;
	int getAPCost() const;
	int getDamage() const;
	virtual void attack() const = 0;
};

#endif //MODULE04_AWEAPON_H
