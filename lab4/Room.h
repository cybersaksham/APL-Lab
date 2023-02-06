#ifndef ROOM_H
#define ROOM_H

#include <string>
using namespace std;

class Room {
public:
	string name_;
	Room(string name);
	void display() const;
	~Room();
};

#endif
