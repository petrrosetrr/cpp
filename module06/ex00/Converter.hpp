//
// Created by Jimmie Alease on 7/5/21.
//

#ifndef MODULE05_CONVERTER_HPP
#define MODULE05_CONVERTER_HPP
#include <iostream>
#include <string>

class Converter {
private:
	Converter();
public:
	static int toInt(const std::string & strToConvert);
	static float toFloat(const std::string & strToConvert);
	static double toDouble(const std::string & strToConvert);
	static char toChar(const std::string & strToConvert);

	class CannotConvertException : public std::exception {
	public:
		virtual const char* what() const throw();
	};
	class NonDisplayableException : public std::exception {
	public:
		virtual const char* what() const throw();
	};
};


#endif //MODULE05_CONVERTER_HPP
