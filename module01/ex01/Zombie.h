//
// Created by petr on 24.06.2021.
//

#ifndef MODULE01_ZOMBIE_H
#define MODULE01_ZOMBIE_H
#include <iostream>

class Zombie {
private:
	std::string name;
public:
	explicit Zombie(std::string  = "");
	virtual ~Zombie();
	void announce();
	void setName(std::string name);
};


#endif //MODULE01_ZOMBIE_H
