#pragma once
#include "Book.h"
#include "Header.h"


// entity-class
class Group
{
	friend class Manager;

private:
	string name;
	int size;
	Book* list;

public:
	Group();
	Group(string name);
	Group(string name, Book* list, int size);
	~Group();

	void add(Book student);
	Book get(int index);
	int getSize();
	string getName();
	void setName(string name);

	string getInfo();
};