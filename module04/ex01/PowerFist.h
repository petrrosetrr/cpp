//
// Created by Jimmie Alease on 6/29/21.
//

#ifndef MODULE04_POWERFIST_H
#define MODULE04_POWERFIST_H
#include <iostream>
#include "AWeapon.h"

class PowerFist : public AWeapon{
public:
	PowerFist();
	PowerFist(const PowerFist &powerFist);
	virtual ~PowerFist();
	virtual void attack() const;
};


#endif //MODULE04_POWERFIST_H
