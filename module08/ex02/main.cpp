//
// Created by petr on 07.07.2021.
//
#include <iostream>
#include "MutantStack.hpp"
#include <string>
#include <stack>

int main(){
	{
		MutantStack<int>    mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while(it != ite) {
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}
	{
		srand(time(nullptr));
		MutantStack<std::string> mutantStack;

		for (int i = 0; i < 100; ++i) {
			mutantStack.push(std::to_string(rand() % 1000));
		}
		MutantStack<std::string>::iterator iBegin = mutantStack.begin();
		MutantStack<std::string>::iterator iEnd = mutantStack.end();

		while (iBegin < iEnd) {
			std::cout << *iBegin << std::endl;
			++iBegin;
		}
	}
}