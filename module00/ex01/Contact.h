//
// Created by Jimmie Alease on 6/18/21.
//

#ifndef MODULE00_CONTACT_H
#define MODULE00_CONTACT_H
#include<iostream>

using namespace std;

class Contact {
protected:
	string firstName;
	string lastName;
	string nickname;
	string login;
	string postalAddress;
	string email;
	string phone;
	string birthday;
	string favoriteMeal;
	string underwearColor;
	string secret;
public:
	Contact();
	void setFirstName(string fistName = "");
	void setLastName(string lastName = "");
	void setNickname(string nickName = "");
	void setLogin(string login = "");
	void setPostalAddress(string postalAddress = "");
	void setEmail(string email = "");
	void setPhone(string phone = "");
	void setBirthday(string birthday = "");
	void setFavoriteMeal(string favoriteMeal = "");
	void setUnderwearColor(string underwearColor = "");
	void setSecret(string secret = "");

	string getFirstName();
	string getLastName();
	string getNickname();
	string getLogin();
	string getPostalAddress();
	string getEmail();
	string getPhone();
	string getBirthday();
	string getFavoriteMeal();
	string getUnderwearColor();
	string getSecret();
};

#endif //MODULE00_CONTACT_H
