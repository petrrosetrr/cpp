//
// Created by petr on 07.07.2021.
//
#include <iostream>
#include <list>
#include "Span.hpp"

int main(){
	{
		Span sp = Span(15);
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::list<int> list = {10000,20000,4999,5000};
		sp.addNumber(list.begin(), list.end());

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
}