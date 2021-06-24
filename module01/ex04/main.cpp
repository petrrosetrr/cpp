//
// Created by petr on 24.06.2021.
//
#include<iostream>
#include "Sed.h"

int main(int ac, char **av) {
	if (ac == 4) {
		try {
			Sed sed(std::string(av[1]), std::string(av[1]) + ".replace");
			sed.replace(std::string(av[2]), std::string(av[3]));
		} catch (std::runtime_error &ex) {
			std::cout << " a " << std::endl;
		}
	} else {
		std::cout << "Wrong number of arguments" << std::endl;
	}
}
