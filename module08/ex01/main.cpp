//
// Created by petr on 07.07.2021.
//
#include <iostream>
#include <list>
#include "Span.hpp"

int main(){
	srand(time(nullptr));
	{
		Span sp = Span(10000);
		for(int i = 0; i < 10000; ++i) {
			sp.addNumber(rand());
		}
		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span: " << sp.longestSpan() << std::endl;
		std::cout << std::endl;
	}

	{
		Span sp = Span(10000);
		std::list<int> list;
		for(int i = 0; i < 10000; ++i) {
			list.push_back(rand());
		}
		sp.addNumber(list.begin(), list.end());
		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span: " << sp.longestSpan() << std::endl;
		std::cout << std::endl;
	}

	{
		Span sp = Span(5);
		sp.addNumber(5, rand() % 10, rand() % 10, rand() % 10);
		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span: " << sp.longestSpan() << std::endl;
		std::cout << std::endl;
	}

	try {
		Span sp = Span(2);
		std::cout << sp.longestSpan() << std::endl;
	} catch (std::exception & e) {
		std::cout << "Caught: " << e.what() << std::endl;
	}

	try {
		srand(time(nullptr));
		Span sp = Span(2);
		std::cout << sp.shortestSpan() << std::endl;
	} catch (std::exception & e) {
		std::cout << "Caught: " << e.what() << std::endl;
	}

	try {
		srand(time(nullptr));
		Span sp = Span(2);
		sp.addNumber(10);
		sp.addNumber(100);
		sp.addNumber(1);
	} catch (std::exception & e) {
		std::cout << "Caught: " << e.what() << std::endl;
	}
}