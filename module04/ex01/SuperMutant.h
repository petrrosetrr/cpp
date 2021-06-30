//
// Created by Jimmie Alease on 6/29/21.
//

#ifndef MODULE04_SUPERMUTANT_H
#define MODULE04_SUPERMUTANT_H
#include <iostream>
#include "Enemy.h"

class SuperMutant : public Enemy{
public:
	SuperMutant();
	SuperMutant(const SuperMutant & superMutant);
	virtual ~SuperMutant();
	virtual void takeDamage(int damage);
};


#endif //MODULE04_SUPERMUTANT_H
