//
// Created by Jimmie Alease on 7/2/21.
//

#ifndef MODULE04_ICE_H
#define MODULE04_ICE_H
#include <iostream>
#include "AMateria.h"

class Ice : public AMateria {
public:
	Ice();
	~Ice();
	Ice* clone() const;
	void use(ICharacter & target);
};


#endif //MODULE04_ICE_H
