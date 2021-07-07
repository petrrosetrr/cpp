//
// Created by petr on 07.07.2021.
//

#include "Span.hpp"


Span::Span(unsigned int n) : size(n) {}

Span::Span(const Span &span) {
	*this = span;
}

Span::~Span() {}

Span &Span::operator=(const Span &span) {
	if (this != &span) {
		this->size = span.size;
		this->storage = span.storage;
	}
	return *this;
}

void Span::addNumber(int number) {
	if (storage.size() < size) {
		storage.insert(number);
	} else {
		throw SpanOutOfBoundsException();
	}
}

void Span::addNumber(unsigned int count, ...) {
	va_list list;
	va_start(list, count);

	for(int i = 0; i < count; ++i) {
		this->addNumber(va_arg(list, int));
	}
	va_end(list);
}

int Span::shortestSpan() const {
	if (storage.size() >= 2) {
		std::multiset<int>::iterator iterator1 = storage.begin();
		std::multiset<int>::iterator iterator2 = ++storage.begin();
		int span = INT_MAX;
		for(int i = 0; i < storage.size() - 1; ++i) {
			if ((*iterator2 - *iterator1) < span) {
				span = (*iterator2 - *iterator1);
			}
			++iterator1;
			++iterator2;
		}
		return span;
	}
	throw NoShortestSpanException();
}

int Span::longestSpan() const {
	if (storage.size() >= 2) {
		return  *(--storage.end()) - *(storage.begin());
	}
	throw NoLongestSpanException();
}


const char *Span::SpanOutOfBoundsException::what() const throw() {
	return "Span is already full";
}

const char *Span::NoShortestSpanException::what() const throw() {
	return "Shortest span not found";
}

const char *Span::NoLongestSpanException::what() const throw() {
	return "Longest span not found";
}
