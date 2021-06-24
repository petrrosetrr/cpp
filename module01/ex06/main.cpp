//
// Created by petr on 24.06.2021.
//
#include<iostream>
#include "Karen.h"

int main(int ac, char **av) {
	Karen karen;

	if (ac == 2) {
		switch (karen.getCommentType(av[1])) {
			case karen.DEBUG: {
				std::cout << "[ DEBUG ]" << std::endl;
				karen.complain("DEBUG");
				std::cout << std::endl;
			}
			case karen.INFO: {
				std::cout << "[ INFO ]" << std::endl;
				karen.complain("INFO");
				std::cout << std::endl;
			}
			case karen.WARNING: {
				std::cout << "[ WARNING ]" << std::endl;
				karen.complain("WARNING");
				std::cout << std::endl;
			}
			case karen.ERROR: {
				std::cout << "[ ERROR ]" << std::endl;
				karen.complain("ERROR");
				break;
			}
			default: {
				std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			}
		}
	}
}