//
// Created by Jimmie Alease on 6/18/21.
//

#include "Contact.h"

Contact::Contact()
: empty(true),
  firstName(),
  lastName(),
  nickname(),
  login(),
  postalAddress(),
  email(),
  phone(),
  birthday(),
  favoriteMeal(),
  underwearColor(),
  secret()
{}

void Contact::setFirstName(string firstName) {
	this->firstName = firstName;
}

void Contact::setLastName(string lastName) {
	this->lastName = lastName;
}

void Contact::setNickname(string nickName) {
	this->nickname = nickName;
}

void Contact::setLogin(string login) {
	this->login = login;
}

void Contact::setPostalAddress(string postalAddress) {
	this->postalAddress = postalAddress;
}

void Contact::setEmail(string email) {
	this->email = email;
}

void Contact::setPhone(string phone) {
	this->phone = phone;
}

void Contact::setBirthday(string birthday) {
	this->birthday = birthday;
}

void Contact::setFavoriteMeal(string favoriteMeal) {
	this->favoriteMeal = favoriteMeal;
}

void Contact::setUnderwearColor(string underwearColor) {
	this->underwearColor = underwearColor;
}

void Contact::setSecret(string secret) {
	this->secret = secret;
}

string Contact::getFirstName() {
	return this->firstName;
}

string Contact::getLastName() {
	return this->lastName;
}

string Contact::getNickname() {
	return this->nickname;
}

//string Contact::getLogin() {
//	return this->login;
//}
//
//string Contact::getPostalAddress() {
//	return this->postalAddress;
//}
//
//string Contact::getEmail() {
//	return this->email;
//}
//
//string Contact::getPhone() {
//	return this->phone;
//}
//
//string Contact::getBirthday() {
//	return this->birthday;
//}
//
//string Contact::getFavoriteMeal() {
//	return this->favoriteMeal;
//}
//
//string Contact::getUnderwearColor() {
//	return this->underwearColor;
//}
//
//string Contact::getSecret() {
//	return this->secret;
//}
