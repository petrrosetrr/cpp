//
// Created by Jimmie Alease on 6/18/21.
//

#ifndef MODULE00_CONTACT_H
#define MODULE00_CONTACT_H
#include<iostream>
#include <array>

using namespace std;

class ContactFiled {
public:
	const string * fieldName;
	string fieldValue;
};

class Contact {
private:
	ContactFiled contactFields[11];
	bool fullfilled;
	int fieldCounter;
public:
	Contact();
	const ContactFiled * getContactInfo();
	void fillContact(string value = "");
	bool isFullfilled();

	static const string fieldNames[11];
};
#endif //MODULE00_CONTACT_H
