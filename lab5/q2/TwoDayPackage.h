#ifndef TWPDAYPACKAGE_H
#define TWODAYPACKAGE_H

#include "Package.h"
using namespace std;

class TwoDayPackage : public Package {
public:
	TwoDayPackage() {}
	TwoDayPackage(const User& sender, const User& recipient, double weight, double costPerOunce, double flatFee) : Package(sender, recipient, weight, costPerOunce), flatFee(flatFee) {
		if (flatFee <= 0) throw invalid_argument("Flat fee for two-day delivery must be positive");
	}

	double calculateCost() const override {
		return Package::calculateCost() + flatFee;
	}
	
	friend istream& operator>>(istream &, TwoDayPackage &);
	friend ostream& operator<<(ostream &, TwoDayPackage);

private:
	double flatFee;
};

ostream& operator<<(ostream &out, TwoDayPackage p) {
	out << "Package Type: Two Day Delivery" << endl;
	out << "Sender: " << endl;
	out << p.sender << endl;
	out << "Receiver: " << endl;
	out << p.recipient << endl;
	out << "Total cost: " << p.calculateCost() << endl;
	return out;
}

istream& operator>>(istream &in, TwoDayPackage &p) {
	in >> (Package &)p;
	cout << "Enter flat fee applied: ";
	in >> p.flatFee;
	return in;
}

#endif
