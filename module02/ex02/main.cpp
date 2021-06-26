//
// Created by Jimmie Alease on 6/26/21.
//
#include <iostream>
#include "Fixed.h"

int main() {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout<< Fixed::max( a, b ) << std::endl;
	std::cout<< Fixed::min( a, b ) << std::endl;

	std::cout << --a << std::endl;
	std::cout << a-- << std::endl;
	std::cout << a - b << std::endl;
	std::cout << a + b << std::endl;
	std::cout << a * b << std::endl;
	std::cout << a / b << std::endl;

	std::cout << "a: " << a << " b: " << b << std::endl;
	std::cout << "(a > b)\t\t\t" << (a > b) << std::endl;
	std::cout << "(a >= b)\t\t" << (a >= b) << std::endl;
	std::cout << "(a < b)\t\t\t" << (a < b) << std::endl;
	std::cout << "(a <= b)\t\t" << (a <= b) << std::endl;
	std::cout << "(a == b)\t\t" << (a == b) << std::endl;
	std::cout << "a == Fixed(a)\t" << (a == Fixed(a)) << std::endl;
	std::cout << "(a != Fixed(a))\t" << (a != Fixed(a)) << std::endl;
	std::cout << "(a != b)\t\t" << (a != b) << std::endl;

	return 0;
}