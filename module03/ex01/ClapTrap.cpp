//
// Created by petr on 27.06.2021.
//

#include "ClapTrap.h"

ClapTrap::ClapTrap(std::string name)
: name(name),
hitPoints(10),
energyPoints(10),
attackDamage(0){
	std::cout << "ClapTrap: Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &clapTrap) {
	std::cout << "ClapTrap: Copy constructor called" << std::endl;
	*this = clapTrap;
}

ClapTrap::ClapTrap(std::string name, unsigned int hitPoints, unsigned int energyPoints, unsigned int attackDamage) :
		name(name),
		hitPoints(hitPoints),
		energyPoints(energyPoints),
		attackDamage(attackDamage){
	std::cout << "ClapTrap: protected constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &clapTrap) {
	std::cout << "ClapTrap: Assignation operator called" << std::endl;
	if (this != &clapTrap) {
		this->name = clapTrap.name;
		this->hitPoints = clapTrap.hitPoints;
		this->energyPoints = clapTrap.energyPoints;
		this->attackDamage = clapTrap.attackDamage;
	}
	return *this;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap: Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string &target) {
	std::cout << "ClapTrap " << this->name << " attacks " << target
	<< " causing " << this->attackDamage << " points of damage " << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << this->name << " takes "
	<< amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "ClapTrap " << this->name << " is repaired for " << amount << " points!" << std::endl;
}

void ClapTrap::setHitPoints(unsigned int hitPoints) {
	this->hitPoints = hitPoints;
}

void ClapTrap::setEnergyPoints(unsigned int energyPoints) {
	this->energyPoints = energyPoints;
}


void ClapTrap::setAttackDamage(unsigned int attackDamage) {
	this->attackDamage = attackDamage;
}

unsigned int ClapTrap::getHitPoints() const {
	return this->hitPoints;
}

unsigned int ClapTrap::getEnergyPoints() const {
	return this->energyPoints;
}

unsigned int ClapTrap::getAttackDamage() const {
	return this->attackDamage;
}

const std::string & ClapTrap::getName() const {
	return this->name;
}

void ClapTrap::setName(std::string name) {
	this->name = name;
}
