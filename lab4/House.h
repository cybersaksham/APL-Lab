#ifndef HOUSE_H
#define HOUSE_H

#include <string>
#include <vector>
#include "Room.h"
using namespace std;

class House {
public:
	House(string name);
	void addRoom(Room *room);
	void display() const;
	~House();
private:
	string name_;
	vector<Room *> rooms_;
};

#endif
