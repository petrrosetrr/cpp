//
// Created by petr on 24.06.2021.
//

#ifndef MODULE01_SED_H
#define MODULE01_SED_H
#include <iostream>

class Sed {
public:
	Sed(std::string fileName, std::string outputFileName);
	void replace(std::string s1, std::string s2);
};


#endif //MODULE01_SED_H
