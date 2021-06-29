//
// Created by petr on 29.06.2021.
//
#include <iostream>
#include "Sorcerer.h"
#include "Victim.h"
#include "Peon.h"
#include "SomeOtherDerivedClass.h"

int main() {
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);

	SomeOtherDerivedClass a("JJ");
	std::cout << a;

	return 0;
}