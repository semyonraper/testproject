#include "Group.h"

Group::Group(){
	name = "no group name";
	size = 0;
	list = NULL;
}

Group::Group(string name){
	this->name = name;
	size = 0;
	list = NULL;
}

Group::Group(string name, Book* list, int size){
	this->name = name;
	this->list = list;
	this->size = size;
}

Group::~Group(){
	if (list != NULL) {
		delete[] list;
	}
}

Book Group::get(int index){
	if (list == NULL || index < 0 || index >= size) {
		return Book("", 0, 0, ' ', false);
	}
	else {
		return list[index];
	}
}  

int Group::getSize(){
	return size;
}

string Group::getName(){
	return name;
}

void Group::setName(string name){
	this->name = name;
}

string Group::getInfo(){
	if (list == NULL || size == 0) {
		return "Group " + name + " is empty.";
	}

	string msg = "Books of group " + name + ":\n";

	for (int i = 0; i < size; i++)
	{
		if (list[i].isAlive()) {
			msg += list[i].getInfo() + "\n";
		}
	}

	return msg;
}

void Group::add(Book book) {
	if (list == NULL) {
		list = new Book[1];
		list[0] = book;
		size = 1;
	}
	else {

		Book* temp = new Book[size + 1];

		for (int i = 0; i < size; i++)
		{
			temp[i] = list[i];
		}
		temp[size] = book;
		size++;
		delete[] list;
		list = temp;
	}
}