//
// Created by Jimmie Alease on 6/26/21.
//

#ifndef CPP_FIXED_H
#define CPP_FIXED_H


class Fixed {
private:
	int value;
	static const int fractionalBits;
public:
	Fixed();
	Fixed(const Fixed &fixed);
	Fixed & operator= (const Fixed &fixed);
	virtual ~Fixed();

};


#endif //CPP_FIXED_H
