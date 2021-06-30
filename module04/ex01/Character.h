//
// Created by Jimmie Alease on 6/29/21.
//

#ifndef MODULE04_CHARACTER_H
#define MODULE04_CHARACTER_H
#include <iostream>
#include "AWeapon.h"
#include "Enemy.h"


class Character
{
private:
	std::string name;
	int ap;
	AWeapon *weapon;
public:
	explicit Character(std::string const & name);
	Character(const Character & character);
	Character & operator=(const Character & character);

	virtual ~Character();
	void recoverAP();
	void equip(AWeapon * weapon);
	void attack(Enemy * enemy);
	const std::string & getName() const;
	int getAp() const;
	const AWeapon * getWeapon() const;
};

std::ostream & operator<<(std::ostream & out, const Character & character);

#endif //MODULE04_CHARACTER_H
