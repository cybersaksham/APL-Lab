#ifndef PACKAGE_H
#define PACKAGE_H

#include <iostream>
#include <string>
#include "User.h"

using namespace std;

class Package {
public:
	Package() {}
	Package(const User& sender, const User& recipient, double weight, double costPerOunce) : sender(sender), recipient(recipient), weight(weight), costPerOunce(costPerOunce) {
		if (weight <= 0) throw invalid_argument("Package weight must be positive");
		if (costPerOunce <= 0) throw invalid_argument("Cost per ounce must be positive");
	}

	virtual double calculateCost() const {
		return weight * costPerOunce;
	}
	
	friend istream& operator>>(istream &, Package &);
	friend ostream& operator<<(ostream &, Package);

protected:
	User sender;
	User recipient;
	double weight;
	double costPerOunce;
};

istream& operator>>(istream &in, Package &p) {
	cout << "Enter for sender:" << endl;
	in >> p.sender;
	cout << "Enter for receiver:" << endl;
	in >> p.recipient;
	cout << "Enter weight in ounces: ";
	in >> p.weight;
	cout << "Enter cost per ounces: ";
	in >> p.costPerOunce;
	return in;
}

ostream& operator<<(ostream &out, Package p) {
	out << "Sender: " << endl;
	out << p.sender << endl;
	out << "Receiver: " << endl;
	out << p.recipient << endl;
	out << "Total cost: " << p.calculateCost() << endl;
	return out;
}

#endif
