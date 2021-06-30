//
// Created by Jimmie Alease on 6/30/21.
//

#ifndef MODULE04_ASSAULTTERMINATOR_H
#define MODULE04_ASSAULTTERMINATOR_H
#include <iostream>
#include "ISpaceMarine.h"

class AssaultTerminator : public ISpaceMarine{
public:
	AssaultTerminator();
	virtual ~AssaultTerminator();
	AssaultTerminator(const AssaultTerminator & assaultTerminator);
	AssaultTerminator & operator=(const AssaultTerminator & assaultTerminator);

	ISpaceMarine* clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;
};


#endif //MODULE04_ASSAULTTERMINATOR_H
