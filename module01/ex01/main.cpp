//
// Created by petr on 24.06.2021.
//
#include<iostream>
#include "Zombie.h"

Zombie* zombieHorde( int N, std::string name );

int main() {
	Zombie *horde = zombieHorde(10, "zombiee");
	for (int i = 0; i < 10; i++) {
		horde[i].announce();
	}
	delete[] horde;
}
