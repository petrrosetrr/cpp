//
// Created by Jimmie Alease on 6/18/21.
//

#include "Contact.h"

const string Contact::fieldNames[11] = {
		"first name",
		"last name",
		"nickname",
		"login",
		"postal address",
		"email",
		"phone",
		"birthday",
		"favorite meal",
		"underwear color",
		"darkest secret"
};

void Contact::fillContact(string value) {
	static int fieldCounter = 0;
	if (fieldCounter < 11) {
		contactFields[fieldCounter].fieldName = &(fieldNames[fieldCounter]);
		contactFields[fieldCounter].fieldValue = value;
		fieldCounter++;
	}
	if (fieldCounter >= 11){
		fullfilled = true;
	}
}

bool Contact::isFullfilled() {
	return fullfilled;
}

const ContactFiled *Contact::getContactInfo() {
	return contactFields;
}

Contact::Contact() : fullfilled(false){}
