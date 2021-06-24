//
// Created by petr on 24.06.2021.
//
#include<iostream>
#include "Zombie.h"

void randomChump(std::string name) {
	Zombie zombie(name);
	zombie.announce();
}