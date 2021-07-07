//
// Created by petr on 07.07.2021.
//

#ifndef MODULE08_MUTANTSTACK_HPP
#define MODULE08_MUTANTSTACK_HPP
#include <iostream>
#include <stack>

template<class T>
class MutantStack : public std::stack<T> {
public:
	MutantStack();
	MutantStack(const MutantStack<T> & mutantstack);
	virtual ~MutantStack();
	MutantStack<T> & operator=(const MutantStack<T> & mutantstack);

	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator begin();
	iterator end();
};

template<class T>
MutantStack<T>::MutantStack() {}

template<class T>
MutantStack<T>::MutantStack(const MutantStack<T> &mutantstack) {
	*this = mutantstack;
}

template<class T>
MutantStack<T>::~MutantStack() {}

template<class T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack<T> & mutantstack) {
	this->c = mutantstack.c;
	return *this;
}

template<class T>
typename MutantStack<T>::iterator MutantStack<T>::begin() {
	return this->c.begin();
}

template<class T>
typename MutantStack<T>::iterator MutantStack<T>::end() {
	return this->c.end();
}


#endif //MODULE08_MUTANTSTACK_HPP
