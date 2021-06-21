//
// Created by Jimmie Alease on 6/21/21.
//

#ifndef MODULE00_PHONEBOOKDRAWER_H
#define MODULE00_PHONEBOOKDRAWER_H
#include "PhoneBook.h"

class PhoneBookDrawer {

public:
	explicit PhoneBookDrawer(PhoneBook & phoneBook);
	void start();

private:
	PhoneBook & phoneBook;
	string readCin();
};


#endif //MODULE00_PHONEBOOKDRAWER_H
