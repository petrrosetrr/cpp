//
// Created by petr on 29.06.2021.
//

#include "Sorcerer.h"

Sorcerer::Sorcerer(std::string name, std::string title)
: name(name), title(title) {
	std::cout << this->name << ", " << this->title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer() {
	std::cout << this->name << ", " << this->title
	<< ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &sorcerer) {
	*this = sorcerer;
}

Sorcerer &Sorcerer::operator=(const Sorcerer &sorcerer) {
	if (this != &sorcerer) {
		this->name = sorcerer.name;
		this->title = sorcerer.title;
	}
	return *this;
}

const std::string &Sorcerer::getName() const {
	return this->name;
}

const std::string &Sorcerer::getTitle() const {
	return this->title;
}

void Sorcerer::polymorph(const Victim &victim) const {
	victim.getPolymorphed();
}

std::ostream & operator<<(std::ostream & out, const Sorcerer & sorcerer) {
	out << "I am " << sorcerer.getName() << ", " << sorcerer.getTitle() << ", and I like ponies!" << std::endl;
	return out;
}
