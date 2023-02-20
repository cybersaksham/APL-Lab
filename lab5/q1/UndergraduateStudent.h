#ifndef UGSTUDENT_H
#define UGSTUDENT_H

#include <iostream>
#include <string>
#include "Student.h"
using namespace std;

class UndergraduateStudent : public Student {
public:
	int year;
	float cgpa;
	string branch;
	
	UndergraduateStudent(string name, int age, string branch, int year, float cgpa) : Student(name, age), branch(branch), year(year), cgpa(cgpa) {
		cout << "UndergraduateStudent constructor called" << endl;
	}
	friend ostream& operator<<(ostream &, UndergraduateStudent const &);
};

ostream& operator<<(ostream &out, UndergraduateStudent const &ug) {
	out << "UG Student:" << endl;
	out << "\tName: " << ug.name << endl;
	out << "\tAge: " << ug.age << endl;
	out << "\tBranch: " << ug.branch << endl;
	out << "\tYear: " << ug.year << endl;
	out << "\tCGPA: " << ug.cgpa << endl;
	return out;
}

#endif
