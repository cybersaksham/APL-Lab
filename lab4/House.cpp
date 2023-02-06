#include <iostream>
#include <string>
#include "House.h"
#include "Room.h"
using namespace std;

House::House(string name) : name_(name) {
	cout << "House created with the name '" << name_ << "'" << endl;
}

void House::addRoom(Room *room) {
	cout << "Adding room '" << room->name_ << "' to the house '" << name_ << "'" << endl;
	rooms_.push_back(room);
}

void House::display() const {
	cout << endl;
	cout << "Name: " << name_ << endl;
	cout << "No of rooms: " << rooms_.size() << endl;
	if(rooms_.size() > 0) {
		cout << "Rooms specification: " << endl;
		for (const auto &room : rooms_) {
			room->display();
		}
	}
	cout << endl;
}

House::~House() {
	for (Room *room : rooms_) {
		delete room;
	}
	rooms_.clear();
	cout << endl << "House information just before deleting:";
	this->display();
	cout << "House '" << name_ << "' deleted" << endl;
}
