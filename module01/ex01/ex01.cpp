//
// Created by Jimmie Alease on 6/23/21.
//
#include<iostream>

void memoryLeak() {
	std::string *panther = new std::string("String panther");
	std::cout << *panther << std::endl;
	delete panther;
}