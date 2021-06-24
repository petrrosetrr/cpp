//
// Created by petr on 24.06.2021.
//
#include<iostream>
#include "Zombie.h"

Zombie* newZombie( std::string name );
void randomChump( std::string name );

int main() {
	std::cout << "new Zombie:" << std::endl;
	Zombie * heapZombie = newZombie("heapZombie");
	heapZombie->announce();
	delete heapZombie;
	std::cout << "random chump:" << std::endl;
	randomChump("stackZombie");
}
