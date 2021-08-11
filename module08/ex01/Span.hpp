//
// Created by petr on 07.07.2021.
//

#ifndef MODULE08_SPAN_HPP
#define MODULE08_SPAN_HPP
#include <iostream>
#include <cstdarg>
#include <set>
#include <climits>

class Span {
private:
	unsigned int size;
	std::multiset<int> storage;
public:
	explicit Span(unsigned int n);
	Span(const Span & span);
	virtual ~Span();
	Span & operator=(const Span & span);

	void addNumber(int number);
	void addNumber(unsigned int size, ...);

	template<class Iterator>
	void addNumber(Iterator start, Iterator end) {
		while (start != end) {
			this->addNumber(*start);
			++start;
		}
	};
	int shortestSpan() const;
	int longestSpan() const;

	class SpanOutOfBoundsException : public std::exception {
	public:
		virtual const char* what() const throw();
	};

	class NoShortestSpanException : public std::exception {
	public:
		virtual const char* what() const throw();
	};

	class NoLongestSpanException : public std::exception {
	public:
		virtual const char* what() const throw();
	};
};


#endif //MODULE08_SPAN_HPP
