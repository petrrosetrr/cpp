//
// Created by Jimmie Alease on 7/2/21.
//

#ifndef MODULE04_CHARACTER_H
#define MODULE04_CHARACTER_H
#include <iostream>
#include "ICharacter.h"
#include "AMateria.h"

class Character : public ICharacter {
private:
	std::string name;
	AMateria *materia[4];
public:
	explicit Character(std::string name);
	~Character();
	Character(const Character & character);
	Character & operator=(const Character & character);

	const std::string & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};


#endif //MODULE04_CHARACTER_H
