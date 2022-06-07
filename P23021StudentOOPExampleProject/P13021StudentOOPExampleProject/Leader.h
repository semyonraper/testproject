#pragma once
#include "Book.h"

// �������� �����, ����������� �����, ������������������ �����, �������, �������, �������� (��������)
// ������������ �����, ������� �����, ����� �����, ������, ���������� �����

class Leader : public Book
{
private:	
	string phoneNumber;
	string e_mail;

public:
	Leader();
	Leader(string name, int age, double mark, char sex, bool alive, 
		string phoneNumber, string e_mail);
	~Leader();

	string getPhoneNumber();
	void setPhoneNumber(string phoneNumber);

	string getEmail();
	void setEmail(string e_mail);

	string getInfo();
};

