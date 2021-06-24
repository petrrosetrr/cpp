//
// Created by petr on 24.06.2021.
//

#ifndef MODULE01_WEAPON_H
#define MODULE01_WEAPON_H
#include<iostream>

class Weapon {
private:
	std::string type;
public:
	Weapon(std::string type = "");
	std::string getType();
	void setType(std::string type);
};


#endif //MODULE01_WEAPON_H
