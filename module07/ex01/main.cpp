//
// Created by Jimmie Alease on 7/6/21.
//
#include <iostream>
#include "iter.hpp"

int main() {
	std::string stringArray[] = {
			"fist",
			"second",
			"third",
			"fourth",
			"fifth"
	};
	int intArray[] = { 1, 2, 3, 4, 5};
	double doubleArray[] = {
			12.1545,
			75.34,
			4353.54,
			654.645,
			1245.567
	};

	std::cout << "string array:" << std::endl;
	iter(stringArray, 5, &print);
	std::cout << std::endl;

	std::cout << "int array:" << std::endl;
	iter(intArray, 5, &print);
	std::cout << std::endl;

	std::cout << "double array:" << std::endl;
	iter(doubleArray, 5, &print);
}