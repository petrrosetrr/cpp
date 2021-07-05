//
// Created by Jimmie Alease on 7/5/21.
//

#include "Converter.hpp"

int Converter::toInt(const std::string &strToConvert) {
	try {
		return std::stoi(strToConvert);
	} catch(...) {
		throw CannotConvertException();
	}
}

float Converter::toFloat(const std::string &strToConvert) {
	try {
		return std::stof(strToConvert);
	} catch (...){
		throw CannotConvertException();
	}
}

double Converter::toDouble(const std::string &strToConvert) {
	try {
		return std::stod(strToConvert);
	} catch (...){
		throw CannotConvertException();
	}
}

char Converter::toChar(const std::string &strToConvert) {
	int tmp =  (Converter::toInt(strToConvert));
	if (tmp >= 0 && tmp <= 31) {
		throw NonDisplayableException();
	}
	if (tmp < 0 || tmp > 127) {
		throw CannotConvertException();
	}
	return static_cast<char> (tmp);
}

const char *Converter::CannotConvertException::what() const throw() {
	return "impossible";
}

const char *Converter::NonDisplayableException::what() const throw() {
	return "Non displayable";
}
