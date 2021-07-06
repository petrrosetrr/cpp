//
// Created by Jimmie Alease on 7/6/21.
//
#include <iostream>
#include "Array.hpp"

int main() {
	Array<std::string> array(10);

	array[0] = "10";
	std::cout <<  array[0] << std::endl;
}