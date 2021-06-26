//
// Created by Jimmie Alease on 6/26/21.
//

#ifndef CPP_FIXED_H
#define CPP_FIXED_H
#include <iostream>
#include<cmath>

class Fixed {
private:
	int value;
	static const int fractionalBits;
public:
	Fixed();
	explicit Fixed(const int value);
	explicit Fixed(const float value);
	Fixed(const Fixed & fixed);
	Fixed & operator= (const Fixed & fixed);
	virtual ~Fixed();

	int getRawBits() const;
	void setRawBits(const int raw);

	float toFloat() const;
	int toInt() const;

	bool operator>(const Fixed & fixed) const;
	bool operator<(const Fixed & fixed) const;
	bool operator>=(const Fixed & fixed) const;
	bool operator<=(const Fixed & fixed) const;
	bool operator==(const Fixed & fixed) const;
	bool operator!=(const Fixed & fixed) const;

	Fixed operator+(const Fixed & fixed) const;
	Fixed operator-(const Fixed & fixed) const;
	Fixed operator*(const Fixed & fixed) const;
	Fixed operator/(const Fixed & fixed) const;

	Fixed & operator++();
	Fixed operator++(int);

	Fixed & operator--();
	Fixed operator--(int);

	static Fixed & min(Fixed & first, Fixed & second);
	static const Fixed & min(const Fixed & first, const Fixed & second);

	static Fixed & max(Fixed & first, Fixed & second);
	static const Fixed & max(const Fixed & first, const Fixed & second);
};

std::ostream & operator<<(std::ostream & out, const Fixed & fixed);

#endif //CPP_FIXED_H
