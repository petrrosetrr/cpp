//
// Created by Jimmie Alease on 7/6/21.
//
#include <iostream>
#include "Array.hpp"
#include <string>

int main() {
	{
		std::cout << "string test" << std::endl;
		Array<std::string> array(10);
		for (int i = 0; i < 10; i++) {
			array[i] = "index: " + std::to_string(i);
		}
		Array<std::string> array1(array);
		for (int i = 0; i < 10; ++i) {
			array1[i] += " test";
			std::cout << "first array: " << array[i] << "\tsecond: " << array1[i] << std::endl;
		}
		std::cout << std::endl;
	}
	{
		std::cout << "int test" << std::endl;
		Array<int> array(100);
		for (int i = 0; i < 100; i++) {
			array[i] = i;
		}
		int sum = 0;
		for(int i = 0; i < 100; i++) {
			sum += array[i];
		}
		std::cout << "array sum: " << sum << std::endl;
	}
}