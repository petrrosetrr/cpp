//
// Created by Jimmie Alease on 7/6/21.
//

#ifndef MODULE06_DATA_HPP
#define MODULE06_DATA_HPP
#include <iostream>

class Data {
public:
	Data(std::string data);
	std::string data;

	static uintptr_t serialize(Data* ptr);
	static Data* deserialize(uintptr_t raw);
};


#endif //MODULE06_DATA_HPP
