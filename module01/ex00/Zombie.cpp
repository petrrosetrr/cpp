//
// Created by petr on 24.06.2021.
//
#include "Zombie.h"

Zombie::Zombie(std::string name) : name(name){}

Zombie::~Zombie() {
	std::cout << "deleting Zombie " << this->name << std::endl;
}

void Zombie::announce() {
	std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
