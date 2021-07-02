//
// Created by Jimmie Alease on 6/30/21.
//
#include <iostream>
#include "ISpaceMarine.h"
#include "TacticalMarine.h"
#include "AssaultTerminator.h"
#include "Squad.h"

int main()
{

	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}

	std::cout << std::endl;
	ISquad *squad = new Squad(*(dynamic_cast<Squad *>(vlc)));
	delete vlc;

	squad->push(new AssaultTerminator);
	squad->push(new TacticalMarine);
	for(int i = 0; i < squad->getCount(); ++i) {
		squad->getUnit(i)->rangedAttack();
	}

	return 0;
}