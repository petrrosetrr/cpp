//
// Created by Jimmie Alease on 6/29/21.
//
#include <iostream>
#include "AWeapon.h"
#include "PlasmaRifle.h"
#include "Character.h"
#include "RadScorpion.h"
#include "PowerFist.h"

int main()
{
	Character* me = new Character("me");
	std::cout << *me;
	Enemy* b = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	std::cout << "\n\n";

	me->recoverAP();
	me->recoverAP();
	me->recoverAP();
	me->recoverAP();
	std::cout << *me;
	return 0;
}