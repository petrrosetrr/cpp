//
// Created by Jimmie Alease on 6/30/21.
//

#ifndef MODULE04_SQUAD_H
#define MODULE04_SQUAD_H
#include "ISquad.h"
#include "ISpaceMarine.h"

class Squad : public ISquad {
private:
	int unitCounter;
	ISpaceMarine **units;
	void pushBack(ISpaceMarine * iSpaceMarine);
public:
	Squad();
	~Squad();
	Squad(const Squad & squad);
	Squad & operator=(const Squad & squad);
	int getCount() const;
	ISpaceMarine* getUnit(int unitIndex) const;
	int push(ISpaceMarine * iSpaceMarine);
};

#endif //MODULE04_SQUAD_H
