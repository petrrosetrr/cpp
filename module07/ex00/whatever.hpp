//
// Created by Jimmie Alease on 7/6/21.
//

#ifndef MODULE06_WHATEVER_HPP
#define MODULE06_WHATEVER_HPP

template <typename T>
void swap(T & a, T & b) {
	T tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T & min(T & a, T & b) {
	return a < b ? a :  b;
}

template <typename T>
T & max(T & a, T & b) {
	return a > b ? a :  b;
}

#endif //MODULE06_WHATEVER_HPP
