//
// Created by Jimmie Alease on 6/29/21.
//

#ifndef MODULE04_RADSCORPION_H
#define MODULE04_RADSCORPION_H
#include <iostream>
#include "Enemy.h"

class RadScorpion : public Enemy{
public:
	RadScorpion();
	RadScorpion(const RadScorpion & radScorpion);
	virtual ~RadScorpion();
};


#endif //MODULE04_RADSCORPION_H
