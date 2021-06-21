//
// Created by Jimmie Alease on 6/18/21.
//

#include "Contact.h"
#include "PhoneBook.h"
#include "PhoneBookDrawer.h"

int main() {
	PhoneBook phoneBook;
	PhoneBookDrawer phoneBookDrawer(phoneBook);
	phoneBookDrawer.start();
}
