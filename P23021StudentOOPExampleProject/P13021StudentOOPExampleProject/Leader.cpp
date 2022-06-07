#include "Leader.h"

Leader::Leader() : Book() {
	//cout << "Call Leader default constructor..." << endl;	
	phoneNumber = "no number";
	e_mail = "no e-mail";
}

Leader::Leader(string name, int age, double mark, char sex, bool alive,
	string phoneNumber, string e_mail) : Book(name, age, mark, sex, alive) {
	
	this->phoneNumber = phoneNumber;
	this->e_mail = e_mail;
}

Leader::~Leader(){
	//cout << "Call Leader destructor..." << endl;
}

string Leader::getPhoneNumber(){
	return phoneNumber;
}

void Leader::setPhoneNumber(string phoneNumber){
	this->phoneNumber = phoneNumber;
}

string Leader::getEmail(){
	return e_mail;
}

void Leader::setEmail(string e_mail){
	this->e_mail = e_mail;
}

string Leader::getInfo() {
	return Book::getInfo()
		+ "; phoneNumber = " + phoneNumber
		+ "; e-mail = " + e_mail;
}