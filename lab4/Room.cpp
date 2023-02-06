#include <iostream>
#include <string>
#include "House.h"
#include "Room.h"
using namespace std;

Room::Room(string name) : name_(name) {}

void Room::display() const {
	cout << "Room name: " << name_ << endl;
}

Room::~Room() {	
	cout << "Room '" << name_ << "' deleted" << endl;
}
