//
// Created by Jimmie Alease on 6/26/21.
//

#ifndef CPP_FIXED_H
#define CPP_FIXED_H
#include <iostream>

class Fixed {
private:
	int value;
	static const int fractionalBits;
public:
	Fixed();
	Fixed(const Fixed &fixed);
	Fixed & operator= (const Fixed &fixed);
	virtual ~Fixed();

	int getRawBits() const;
	void setRawBits(const int raw);
};


#endif //CPP_FIXED_H
