#include <bits/stdc++.h>
using namespace std;

class Student {
    int rNo;
    float perc;
    
    void inputOn() {
    	cout << "Input start..." << endl;
    }
    
    void inputOff() {
    	cout << "Input end..." << endl;
    }

public:
    void read() {
    	this->inputOn();
    	cout << "Enter roll no: ";
    	cin >> this->rNo;
    	cout << "Enter percentage: ";
    	cin >> this->perc;
    	this->inputOff();
    }
    
    void print() {
    	cout << "Roll no: " << this->rNo << endl;
    	cout << "Percentage: " << this->perc << endl;
    }
};

int main() {
	Student s1;
	s1.read();
	s1.print();

	return 0;
}
