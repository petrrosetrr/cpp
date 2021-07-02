//
// Created by Jimmie Alease on 7/2/21.
//

#ifndef MODULE04_CURE_H
#define MODULE04_CURE_H
#include <iostream>
#include "AMateria.h"

class Cure : public AMateria{
public:
	Cure();
	~Cure();
	Cure* clone() const;
	void use(ICharacter & target);
};


#endif //MODULE04_CURE_H
