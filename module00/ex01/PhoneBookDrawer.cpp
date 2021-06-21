//
// Created by Jimmie Alease on 6/21/21.
//

#include "PhoneBookDrawer.h"
#include <iomanip>

PhoneBookDrawer::PhoneBookDrawer(PhoneBook & phoneBook) : phoneBook(phoneBook){}

string PhoneBookDrawer::readCin() {
	string command;
	cin >> command;
	if (command == "") {
		throw std::runtime_error("ctrl d");
	}
	return command;
}

void PhoneBookDrawer::start() {
	int i(0);
	string command;

	try {
		while(true) {
			cout << "enter the command (ADD, SEARCH EXIT):" << endl;
			command = this->readCin();
			if (command == "ADD") {
				string value;
				Contact & contact = phoneBook.getContact(i++);
				if (i >= 8) {
					cout << "phone book is full, contact " << i % 8 << " will be overwritten";
				}
				for (int i = 0; i < 11; i++) {
					cout << Contact::fieldNames[i] << ":" << endl;
					value = this->readCin();
					contact.fillContact(value);
				}
			} else if (command == "SEARCH") {
				for(int i = 0; i < 8; i++) {
					Contact & contact = phoneBook.getContact(i);
					if (contact.isFullfilled()) {
						const ContactFiled * fields = contact.getContactInfo();
						for (int j = 0; j < 3; j++) {
							cout << right << std::setw(10) << i << "|";
							string value = fields[j].fieldValue;
							if (value.length() >= 10) {
								cout << right << std::setw(10) << value.erase(9).append(".") << "|";
							} else {
								cout << right << std::setw(10) << value << "|";
							}

						}
						cout << endl;
					}
				}

				string index;
				cout << "enter the index: " << endl;
				index = this->readCin();

				if (stoi(index) >= 8 || stoi(index) < 0
					|| !(phoneBook.getContact(stoi(index)).isFullfilled())) {
					cout << "invalid index" << endl;
				} else {
					Contact & contact = phoneBook.getContact(stoi(index));
					for(int i = 0; i < 11; i++) {
						cout << *(contact.getContactInfo()[i].fieldName) << ": ";
						cout << contact.getContactInfo()[i].fieldValue << endl;
					}
				}
			} else if (command == "EXIT") {
				exit(0);
			}
		}
	} catch (std::runtime_error & ex) {
		cout << "Caught " << ex.what() << endl;
	}
}
