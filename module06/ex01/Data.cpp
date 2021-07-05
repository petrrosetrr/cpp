//
// Created by Jimmie Alease on 7/6/21.
//

#include "Data.hpp"

Data::Data(std::string data) :data(data){}

uintptr_t Data::serialize(Data *ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data *Data::deserialize(uintptr_t raw) {
	return reinterpret_cast<Data *>(raw);
}
