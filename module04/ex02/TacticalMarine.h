//
// Created by Jimmie Alease on 6/30/21.
//

#ifndef MODULE04_TACTICALMARINE_H
#define MODULE04_TACTICALMARINE_H
#include <iostream>
#include "ISpaceMarine.h"

class TacticalMarine : public ISpaceMarine{
public:
	TacticalMarine();
	virtual ~TacticalMarine();
	TacticalMarine(const TacticalMarine & tacticalMarine);
	TacticalMarine & operator=(const TacticalMarine & tacticalMarine);

	ISpaceMarine* clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;
};


#endif //MODULE04_TACTICALMARINE_H
