//
// Created by petr on 24.06.2021.
//
#include<iostream>
#include "Zombie.h"

Zombie* zombieHorde(int N, std::string name) {
	Zombie * horde = new Zombie[N];

	for (int i = 0; i < N; i++) {
		horde[i].setName(name);
	}
	return horde;
}