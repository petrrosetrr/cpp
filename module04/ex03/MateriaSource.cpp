//
// Created by Jimmie Alease on 7/2/21.
//

#include "MateriaSource.h"

MateriaSource::MateriaSource() {
	for(int i = 0; i < 4; ++i) {
		materia[i] = nullptr;
	}
}

MateriaSource::MateriaSource(const MateriaSource & materiaSource) {
	*this = materiaSource;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &materiaSource) {
	if (this != &materiaSource) {
		for (int i = 0; i < 4; ++i) {
			delete materia[i];
			materia[i] = (materiaSource.materia[i]) ? materiaSource.materia[i]->clone() : nullptr;
		}
	}
	return *this;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; ++i) {
		delete materia[i];
	}
}

void MateriaSource::learnMateria(AMateria *m) {
	for (int i = 0; i < 4; ++i) {
		if (!materia[i]) {
			materia[i] = m;
			return;
		}
	}
}

AMateria *MateriaSource::createMateria(const std::string &type) {
	for (int i = 0; i < 4; ++i) {
		if(materia[i]->getType() == type) {
			return materia[i]->clone();
		}
	}
	return nullptr;
}
