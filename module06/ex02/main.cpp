//
// Created by Jimmie Alease on 7/6/21.
//
#include <iostream>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate() {
	int randomValue  = rand() % 3;
	switch (randomValue) {
		case 0:
			return new A;
		case 1:
			return new B;
		case 2:
			return new C;
	}
	return nullptr;
}

void identify(Base & p) {
	try {
		(void)dynamic_cast<A &>(p);
		std::cout << "A";
	} catch (...) {}
	try {
		(void)dynamic_cast<B &>(p);
		std::cout << "B";
	} catch (...) {}
	try {
		(void)dynamic_cast<C &>(p);
		std::cout << "C";
	} catch (...) {}
}

void identify(Base * p) {
	if (dynamic_cast<A *>(p)) {
		std::cout << "A";
	} else if (dynamic_cast<B *>(p)) {
		std::cout << "B";
	} else if (dynamic_cast<C *>(p)) {
		std::cout << "C";
	}
}

int main() {
	srand(time(nullptr));
	Base *randomObjects[10];
	for (int i = 0; i < 10; ++i) {
		randomObjects[i] = generate();
		std::cout << "Object " << i << " is: " << std::endl;
		identify(randomObjects[i]);
		std::cout << "\t\t";
		identify(*randomObjects[i]);
		std::cout << std::endl;
		delete randomObjects[i];
	}
}