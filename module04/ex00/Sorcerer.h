//
// Created by petr on 29.06.2021.
//

#ifndef MODULE03_SORCERER_H
#define MODULE03_SORCERER_H
#include <iostream>
#include "Victim.h"

class Sorcerer {
private:
	std::string name;
	std::string title;
public:
	Sorcerer(std::string name, std::string title);
	virtual ~Sorcerer();
	Sorcerer(const Sorcerer & sorcerer);
	Sorcerer & operator=(const Sorcerer & sorcerer);

	const std::string & getName() const;
	const std::string & getTitle() const;
	void polymorph(Victim const & victim) const;
};

std::ostream & operator<<(std::ostream & out, const Sorcerer & sorcerer);

#endif //MODULE03_SORCERER_H
