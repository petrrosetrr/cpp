//
// Created by Jimmie Alease on 6/18/21.
//

#include "Contact.h"
#include "PhoneBook.h"
#include <iomanip>

int main() {
	string command;
	PhoneBook phoneBook;
	int i = 0;

	while(true) {
		cin >> command;
		if (command == "ADD") {
			string value;
			Contact & contact = phoneBook.getContact(i++);
			if (i >= 8) {
				cout << "phone book is full, contact " << i % 8 << " will be overwritten";
			}
			cout << "first name: " << endl;
			cin >> value;
			contact.setFirstName(value);
			cout << endl;

			cout << "last name: " << endl;
			cin >> value;
			contact.setLastName(value);
			cout << endl;

			cout << "nickname: " << endl;
			cin >> value;
			contact.setNickname(value);
			cout << endl;

			cout << "login: " << endl;
			cin >> value;
			contact.setLogin(value);
			cout << endl;

			cout << "postal address: " << endl;
			cin >> value;
			contact.setPostalAddress(value);
			cout << endl;

			cout << "email address: " << endl;
			cin >> value;
			contact.setEmail(value);
			cout << endl;

			cout << "phone number: " << endl;
			cin >> value;
			contact.setPhone(value);
			cout << endl;

			cout << "birthday date: " << endl;
			cin >> value;
			contact.setBirthday(value);
			cout << endl;

			cout << "favorite meal: " << endl;
			cin >> value;
			contact.setFavoriteMeal(value);
			cout << endl;

			cout << "underwear color: " << endl;
			cin >> value;
			contact.setUnderwearColor(value);
			cout << endl;

			cout << "darkest secret: " << endl;
			cin >> value;
			contact.setSecret(value);
			cout << endl;
			contact.empty = false;
			cout << "contact successfully added" << endl;
		} else if (command == "EXIT") {
			return (0);
		} else if (command == "SEARCH") {
			for(int i = 0; i < 8; i++) {
				Contact & contact = phoneBook.getContact(i);
				if (!contact.empty) {
					cout << right << std::setw(10) << i << "|";

					if (contact.getFirstName().length() >= 10) {
						cout << right << std::setw(10) << contact.getFirstName().erase(9).append(".") << "|";
					} else {
						cout << right << std::setw(10) << contact.getFirstName() << "|";
					}

					if (contact.getLastName().length() >= 10) {
						cout << right << std::setw(10) << contact.getLastName().erase(9).append(".") << "|";
					}
					else {
						cout << right << std::setw(10) << contact.getLastName() << "|";
					}

					if (contact.getNickname().length() >= 10) {
						cout << right << std::setw(10) << contact.getNickname().erase(9).append(".") << "|";
					}
					else {
						cout << right << std::setw(10) << contact.getNickname() << "|";
					}

					cout << endl;
				}
			}
		}
	}
}
