//
// Created by Jimmie Alease on 7/6/21.
//
#include <iostream>
#include "Data.hpp"

int main() {
	Data data("data");

	uintptr_t dataAddress = Data::serialize(&data);
	if (reinterpret_cast<Data *>(dataAddress) == &data) {
		std::cout << "addresses is equal!🌝" << std::endl;
	}
	Data * dataPtr = Data::deserialize(dataAddress);
	std::cout << dataPtr->data << std::endl;
}