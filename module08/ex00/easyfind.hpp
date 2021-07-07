//
// Created by petr on 07.07.2021.
//

#include <algorithm>

template<class T>
typename T::iterator easyfind(T & container, int value) {
	return std::find(container.begin(), container.end(), value);
}