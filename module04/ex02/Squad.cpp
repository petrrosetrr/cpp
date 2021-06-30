//
// Created by Jimmie Alease on 6/30/21.
//

#include <algorithm>
#include "Squad.h"

Squad::Squad() : unitCounter(0), units(nullptr){}

Squad::Squad(const Squad &squad)
: unitCounter(0), units(nullptr) {
	*this = squad;
}

Squad &Squad::operator=(const Squad &squad) {
	if (this != &squad) {
		delete[] this->units;
		this->unitCounter = squad.unitCounter;
		this->units = new ISpaceMarine * [this->unitCounter];
		for(int i = 0; i < this->unitCounter; ++i) {
			this->units[i] = squad.units[i]->clone();
		}
	}
	return *this;
}

Squad::~Squad() {
	delete[] units;
}

int Squad::getCount() const {
	return this->unitCounter;
}

ISpaceMarine *Squad::getUnit(int unitIndex) const {
	if(unitIndex < this->unitCounter || unitIndex < 0) {
		return this->units[unitIndex];
	}
	return nullptr;
}

void Squad::pushBack(ISpaceMarine *iSpaceMarine) {
	ISpaceMarine **tmp = new ISpaceMarine * [this->unitCounter + 1];
	for(int i = 0; i < this->unitCounter; ++i) {
		tmp[i] = this->units[i];
	}
	tmp[this->unitCounter] = iSpaceMarine;
	this->unitCounter++;
	delete[] this->units;
	this->units = tmp;
}


int Squad::push(ISpaceMarine * iSpaceMarine) {
	if (iSpaceMarine) {
		for (int i = 0; i < this->unitCounter; ++i) {
			if (this->units[i] == iSpaceMarine) {
				return this->unitCounter;
			}
		}
		this->pushBack(iSpaceMarine);
	}
	return this->unitCounter;
}
