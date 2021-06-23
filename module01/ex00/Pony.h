//
// Created by Jimmie Alease on 6/20/21.
//

#ifndef MODULE01_PONY_H
#define MODULE01_PONY_H
#include<iostream>

class Pony {
protected:
	std::string name;
public:
	Pony();
	explicit Pony(std::string name);
	~Pony();
	void setName(std::string name);
	const std::string & getName();
	void sayHi();
	void eat();
	void sleep();
};


#endif //MODULE01_PONY_H
