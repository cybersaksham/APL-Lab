#ifndef USER_H
#define USER_H

#include <iostream>
#include <string>

using namespace std;

struct User {
	string name;
	string address;
	string city;
	string state;
	string zip;
	friend ostream& operator<<(ostream &, User);
	friend istream& operator>>(istream &, User &);
};

ostream& operator<<(ostream &out, User u) {
	out << "\tName: " << u.name << endl;
	out << "\tAddress: " << u.address << endl;
	out << "\tCity: " << u.city << endl;
	out << "\tState: " << u.state << endl;
	out << "\tZip: " << u.zip << endl;
	return out;
}

istream& operator>>(istream &in, User &u) {
	cout << "\tEnter name: ";
	in >> u.name;
	cout << "\tEnter address: ";
	in >> u.address;
	cout << "\tEnter city: ";
	in >> u.city;
	cout << "\tEnter state: ";
	in >> u.state;
	cout << "\tEnter zipcode: ";
	in >> u.zip;
	return in;
}

#endif
