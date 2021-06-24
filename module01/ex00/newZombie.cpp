//
// Created by petr on 24.06.2021.
//
#include<iostream>
#include "Zombie.h"

Zombie * newZombie(std::string name) {
	return new Zombie(name);
}
