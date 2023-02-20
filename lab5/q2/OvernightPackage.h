#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H

#include "Package.h"
using namespace std;

class OvernightPackage : public Package {
public:
	OvernightPackage() {}
	OvernightPackage(const User& sender, const User& recipient, double weight, double costPerOunce, double additionalFeePerOunce) : Package(sender, recipient, weight, costPerOunce), additionalFeePerOunce(additionalFeePerOunce) {
		if (additionalFeePerOunce <= 0) throw invalid_argument("Additional fee per ounce for overnight delivery must be positive");
	}

	double calculateCost() const override {
		return (weight * (costPerOunce + additionalFeePerOunce));
	}
	
	friend istream& operator>>(istream &, OvernightPackage &);
	friend ostream& operator<<(ostream &, OvernightPackage);

private:
	double additionalFeePerOunce;
};

ostream& operator<<(ostream &out, OvernightPackage p) {
	out << "Package Type: One Night Delivery" << endl;
	out << "Sender: " << endl;
	out << p.sender << endl;
	out << "Receiver: " << endl;
	out << p.recipient << endl;
	out << "Total cost: " << p.calculateCost() << endl;
	return out;
}

istream& operator>>(istream &in, OvernightPackage &p) {
	in >> (Package &)p;
	cout << "Enter additional fee per ounce: ";
	in >> p.additionalFeePerOunce;
	return in;
}

#endif
