//
// Created by Jimmie Alease on 6/18/21.
//

#ifndef PHONEBOOK_H
#define PHONEBOOK_H
#include "Contact.h"
#include<iostream>

using namespace std;

class PhoneBook {
protected:
	Contact contacts[8];
public:
	PhoneBook();
	Contact & getContact(int index = 0);
};

#endif
