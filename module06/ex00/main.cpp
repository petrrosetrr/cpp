//
// Created by Jimmie Alease on 7/5/21.
//
#include <iostream>
#include "Converter.hpp"

int main(int argc, char **argv) {
	if (argc == 2) {
		std::cout << "char: ";
		try {
			char tmp = Converter::toChar(argv[1]);
			std::cout << "'" << tmp << "'";
		} catch (std::exception & e) {
			std::cout << e.what();
		}
		std::cout << std::endl;

		std::cout << "int: ";
		try {
			std::cout << Converter::toInt(argv[1]);
		} catch (std::exception & e) {
			std::cout << e.what();
		}
		std::cout << std::endl;

		std::cout << "float: ";
		try {
			std::cout.precision(1);
			std::cout << std::fixed <<Converter::toFloat(argv[1]) << "f";
		} catch (std::exception & e) {
			std::cout << e.what();
		}
		std::cout << std::endl;

		std::cout << "double: ";
		try {
			std::cout << Converter::toDouble(argv[1]);
		} catch (std::exception & e) {
			std::cout << e.what();
		}
		std::cout << std::endl;
	} else {
		std::cout<< "Wrong number of arguments🥴" << std::endl;
	}
}