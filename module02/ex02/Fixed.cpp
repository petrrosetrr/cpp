//
// Created by Jimmie Alease on 6/26/21.
//

#include "Fixed.h"

const int Fixed::fractionalBits = 8;

Fixed::Fixed(): value(0) {}

Fixed::Fixed(const int value): value(0) {
	this->value = value << fractionalBits;
}

Fixed::Fixed(const float value): value(0) {
	this->value = roundf(value * (1 << fractionalBits));
}

Fixed::Fixed(const Fixed &fixed) {
	*this = fixed;
}

Fixed &Fixed::operator=(const Fixed &fixed) {
	if (this != &fixed) {
		this->value = fixed.getRawBits();
	}
	return *this;
}

Fixed::~Fixed() {}

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

bool Fixed::operator>(const Fixed &fixed) const {
	return this->getRawBits() > fixed.getRawBits();
}

bool Fixed::operator<(const Fixed &fixed) const {
	return this->getRawBits() < fixed.getRawBits();
}

bool Fixed::operator>=(const Fixed &fixed) const {
	return this->getRawBits() >= fixed.getRawBits();
}

bool Fixed::operator<=(const Fixed &fixed) const {
	return this->getRawBits() <= fixed.getRawBits();
}

bool Fixed::operator==(const Fixed &fixed) const {
	return this->getRawBits() == fixed.getRawBits();
}

bool Fixed::operator!=(const Fixed &fixed) const {
	return this->getRawBits() != fixed.getRawBits();
}

Fixed Fixed::operator+(const Fixed &fixed) const {
	Fixed tmp;

	tmp.setRawBits(this->getRawBits() + fixed.getRawBits());
	return tmp;
}

Fixed Fixed::operator-(const Fixed &fixed) const {
	Fixed tmp;

	tmp.setRawBits(this->getRawBits() - fixed.getRawBits());
	return tmp;
}

Fixed Fixed::operator*(const Fixed &fixed) const {
	Fixed tmp;

	tmp.setRawBits(this->getRawBits() * fixed.getRawBits() >> fractionalBits);
	return tmp;
}

Fixed Fixed::operator/(const Fixed &fixed) const {
	Fixed tmp;

	tmp.setRawBits((this->getRawBits() << fractionalBits) / fixed.getRawBits());
	return tmp;
}

Fixed &Fixed::operator++() {
	this->value++;
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed tmp(*this);

	++(*this);
	return tmp;
}

Fixed &Fixed::operator--() {
	this->value--;
	return *this;
}

Fixed Fixed::operator--(int) {
	Fixed tmp(*this);

	--(*this);
	return tmp;
}

Fixed &Fixed::min(Fixed &first, Fixed &second) {
	return first < second ? first : second;
}

const Fixed &Fixed::min(const Fixed &first, const Fixed &second) {
	return first < second ? first : second;
}

Fixed &Fixed::max(Fixed &first, Fixed &second) {
	return first > second ? first : second;;
}

const Fixed &Fixed::max(const Fixed &first, const Fixed &second) {
	return first > second ? first : second;;
}
