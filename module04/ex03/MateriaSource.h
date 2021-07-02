//
// Created by Jimmie Alease on 7/2/21.
//

#ifndef MODULE04_MATERIASOURCE_H
#define MODULE04_MATERIASOURCE_H
#include <iostream>
#include "AMateria.h"
#include "IMateriaSource.h"

class MateriaSource : public IMateriaSource {
private:
	AMateria *materia[4];
public:
	MateriaSource();
	MateriaSource(const MateriaSource & materiaSource);
	MateriaSource & operator=(const MateriaSource & materiaSource);
	~MateriaSource();

	void learnMateria(AMateria * m);
	AMateria* createMateria(std::string const & type);
};


#endif //MODULE04_MATERIASOURCE_H
