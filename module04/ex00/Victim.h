//
// Created by petr on 29.06.2021.
//

#ifndef MODULE03_VICTIM_H
#define MODULE03_VICTIM_H
#include <iostream>

class Victim {
private:
	std::string name;
	std::string title;
public:
	explicit Victim(std::string name);
	Victim(const Victim & victim);
	Victim & operator=(const Victim & victim);
	virtual ~Victim();

	virtual void getPolymorphed() const;
	const std::string & getName() const;
};

std::ostream & operator<<(std::ostream & out, const Victim & victim);


#endif //MODULE03_VICTIM_H
