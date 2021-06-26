//
// Created by Jimmie Alease on 6/26/21.
//

#include "Fixed.h"

const int Fixed::fractionalBits = 8;

Fixed::Fixed(): value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value): value(0) {
	std::cout << "Int constructor called" << std::endl;
	this->value = value << fractionalBits;
}

Fixed::Fixed(const float value): value(0) {
	std::cout << "Float constructor called" << std::endl;
	this->value = roundf(value * (1 << fractionalBits));
}

Fixed::Fixed(const Fixed &fixed) {
	std::cout << "Copy constructor called" << std::endl;
//	this->value = fixed.getRawBits();
	*this = fixed;
}

Fixed &Fixed::operator=(const Fixed &fixed) {
	std::cout << "Assignation operator called" << std::endl;
	if (this != &fixed) {
		this->value = fixed.getRawBits();
	}
	return *this;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const {
	return this->value;
}

void Fixed::setRawBits(const int raw) {
	this->value = raw;
}

float Fixed::toFloat() const {
	return ((float)this->value / (float)(1 << fractionalBits));
}

int Fixed::toInt() const {
	return this->value >> fractionalBits;
}

std::ostream & operator<<(std::ostream & out, const Fixed & fixed) {
	out << fixed.toFloat();
	return out;
}
