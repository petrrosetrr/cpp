//
// Created by petr on 24.06.2021.
//
#include<iostream>

int main() {
	std::string str("HI THIS IS BRAIN");
	std::string * stringPTR = &str;
	std::string & stringREF = str;

	std::cout << "string address: " << &str << std::endl;
	std::cout << "string address: " << static_cast<void *>(stringPTR) << std::endl;
	std::cout << "string address: " << &stringREF << std::endl;

	std::cout << "string: " << *stringPTR << std::endl;
	std::cout << "string: " << stringREF << std::endl;
}
