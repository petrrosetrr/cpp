//
// Created by petr on 29.06.2021.
//

#ifndef MODULE03_PEON_H
#define MODULE03_PEON_H
#include <iostream>
#include "Victim.h"

class Peon : public Victim {
public:
	explicit Peon(std::string name);
	virtual ~Peon();
	virtual void getPolymorphed() const;
};


#endif //MODULE03_PEON_H
