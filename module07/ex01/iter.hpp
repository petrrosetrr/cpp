//
// Created by Jimmie Alease on 7/6/21.
//

#ifndef MODULE07_ITER_HPP
#define MODULE07_ITER_HPP
#include <iostream>

template<typename T>
void iter(T *array, int length, void (*f)(T &)) {
	for (int i = 0; i < length; ++i) {
		f(array[i]);
	}
}
template<typename T>
void print(T &element) {
	std::cout << element << std::endl;
}


#endif //MODULE07_ITER_HPP
