#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"
using namespace std;

int main() {
	Package package;
	cin >> package;
	cout << package << endl;

	TwoDayPackage twoDayPackage;
	cin >> twoDayPackage;
	cout << twoDayPackage << endl;

	OvernightPackage overnightPackage;
	cin >> overnightPackage;
	cout << overnightPackage << endl;

	return 0;
}

