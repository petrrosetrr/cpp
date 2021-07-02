//
// Created by Jimmie Alease on 7/2/21.
//

#ifndef MODULE04_AMATERIA_H
#define MODULE04_AMATERIA_H
#include <iostream>
#include "ICharacter.h"

class AMateria {
protected:
	std::string type;
	unsigned int xp;
public:
	AMateria(std::string const & type);
	AMateria(const AMateria & aMateria);
	AMateria & operator=(const AMateria & aMateria);
	virtual ~AMateria();
	const std::string & getType() const; //Returns the materia type
	unsigned int getXP() const; //Returns the Materia's XP
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter & target);
};

#endif //MODULE04_AMATERIA_H
