//
// Created by Jimmie Alease on 6/29/21.
//

#ifndef MODULE04_SOMEOTHERDERIVEDCLASS_H
#define MODULE04_SOMEOTHERDERIVEDCLASS_H
#include <iostream>
#include "Victim.h"

class SomeOtherDerivedClass : public Victim{
public:
	explicit SomeOtherDerivedClass(std::string name);
	virtual ~SomeOtherDerivedClass();
	virtual void getPolymorphed() const;
};


#endif //MODULE04_SOMEOTHERDERIVEDCLASS_H
