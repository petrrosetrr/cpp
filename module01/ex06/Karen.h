//
// Created by petr on 24.06.2021.
//

#ifndef MODULE01_KAREN_H
#define MODULE01_KAREN_H
#include<iostream>

class Karen {
private:
	void debug();
	void info();
	void warning();
	void error();
	const std::string commentTypes[4];
public:
	Karen();
	enum commentTypes {
		DEBUG,
		INFO,
		WARNING,
		ERROR
	};
	int getCommentType(std::string comment);
	void complain(std::string level);
};

#endif //MODULE01_KAREN_H
