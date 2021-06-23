//
// Created by Jimmie Alease on 6/20/21.
//

#include "Pony.h"

Pony::Pony() {
	this->name = "Pupony";
}

Pony::Pony(std::string name) {
	this->name = name;
}

Pony::~Pony() {
	std::cout << "deleting Pony " << this->name << " ((" << std::endl;
}

void Pony::setName(std::string name) {
	this->name = name;
}

void Pony::sayHi() {
	std::cout << "Pony " << this->name << " says hi" << std::endl;
}

void Pony::eat() {
	std::cout << "Pony " << this->name << " is eating" << std::endl;
}

void Pony::sleep() {
	std::cout << "Pony " << this->name << " is sleeping" << std::endl;
}

const std::string &Pony::getName() {
	return this->name;
}

