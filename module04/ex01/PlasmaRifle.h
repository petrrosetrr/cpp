//
// Created by Jimmie Alease on 6/29/21.
//

#ifndef MODULE04_PLASMARIFLE_H
#define MODULE04_PLASMARIFLE_H
#include <iostream>
#include "AWeapon.h"

class PlasmaRifle : public AWeapon {
public:
	PlasmaRifle();
	PlasmaRifle(const PlasmaRifle &plasmaRifle);
	virtual ~PlasmaRifle();
	virtual void attack() const;
};


#endif //MODULE04_PLASMARIFLE_H
