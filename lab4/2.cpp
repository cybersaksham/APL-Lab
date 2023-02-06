#include <iostream>
#include "House.h"
using namespace std;

int main() {
	string hname;
	cout << "Enter house name: ";
	cin >> hname;
	House house(hname);
	
	int rooms;
	cout << "Enter no of rooms: ";
	cin >> rooms;
	
	for(int i=0; i<rooms; i++) {
		string room;
		cout << "Enter name of room no " << i + 1 << ": ";
		cin >> room;
		Room *r = new Room(room);
		house.addRoom(r);
	}
	
	house.display();

	return 0;
}
