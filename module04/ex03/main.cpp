//
// Created by Jimmie Alease on 7/2/21.
//
#include <iostream>
#include "IMateriaSource.h"
#include "MateriaSource.h"
#include "Ice.h"
#include "Cure.h"
#include "Character.h"

int main()
{
	delete new int;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);

	IMateriaSource * source = new MateriaSource();
	*dynamic_cast<MateriaSource *>(source) = *dynamic_cast<MateriaSource *>(src);
	delete src;
	ICharacter * testCharacter = new Character(*dynamic_cast<Character *>(bob));
	testCharacter->equip(source->createMateria("ice"));
	testCharacter->use(0, *me);
	testCharacter->equip(source->createMateria("cure"));
	testCharacter->use(1, *me);
	delete testCharacter;
	delete source;
	delete bob;
	delete me;
	return 0;
}