//
// Created by Jimmie Alease on 6/30/21.
//
#ifndef MODULE04_ISQUAD_H
#define MODULE04_ISQUAD_H
#include "ISpaceMarine.h"

class ISquad {
public:
	virtual ~ISquad() {}
	virtual int getCount() const = 0;
	virtual ISpaceMarine* getUnit(int) const = 0;
	virtual int push(ISpaceMarine*) = 0;
};
#endif //MODULE04_ISQUAD_H
