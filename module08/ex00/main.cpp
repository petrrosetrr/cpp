//
// Created by petr on 07.07.2021.
//
#include <iostream>
#include <vector>
#include <array>
#include <list>
#include "easyfind.hpp"

int main() {
	{
		std::cout << "array test" << std::endl;
		std::array<int, 1000> array;
		srand(time(nullptr));
		for (int i = 0; i < 1000; ++i) {
			array[i] = rand() % 100;
		}
		std::cout << "index of 42: " << easyfind(array, 42) - array.begin() << std::endl;
	}
	{
		std::cout << "vector test" << std::endl;
		std::vector<int> vector;
		vector.reserve(1000);
		for (int i = 0; i < 1000; ++i) {
			vector.push_back(rand() % 100);
		}
		std::cout << "index of 42: " << std::distance(vector.begin(), easyfind(vector, 42)) << std::endl;
	}
}