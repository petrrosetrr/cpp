//
// Created by Jimmie Alease on 7/6/21.
//
#include <iostream>
#include "whatever.hpp"

int main() {
	{
		int a = 2;
		int b = 3;
		std::cout << "int tests" << std::endl;
		std::cout << "a = " << a << ", b = " << b << std::endl;
		::swap( a, b );
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
		std::cout << std::endl;
	}

	{
		std::cout << "string tests" << std::endl;
		std::string c = "chaine1";
		std::string d = "chaine2";
		std::cout << "c = " << c << ", d = " << d << std::endl;
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
		std::cout << std::endl;
	}

	{
		std::cout << "double tests" << std::endl;
		double a = 12.21344;
		double b = 145.28732;
		std::cout << "a = " << a << ", b = " << b << std::endl;
		::swap(a, b);
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( c, d ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( a, b ) << std::endl;
		std::cout << std::endl;
	}

	{
		std::cout << "float tests" << std::endl;
		float a = 12.21344;
		float b = 145.28732;
		std::cout << "a = " << a << ", b = " << b << std::endl;
		::swap(a, b);
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( c, d ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( a, b ) << std::endl;
	}
}
