#ifndef PGSTUDENT_H
#define PGSTUDENT_H

#include <iostream>
#include <string>
#include "Student.h"
using namespace std;

class GraduateStudent : public Student {
public:
	int researchCredits;
	string major;
	
	GraduateStudent(string name, int age, string major, int researchCredits) : Student(name, age), major(major), researchCredits(researchCredits) {
		cout << "GraduateStudent constructor called" << endl;
	}
	friend ostream& operator<<(ostream &, GraduateStudent const &);
};

ostream& operator<<(ostream &out, GraduateStudent const &pg) {
	out << "PG Student:" << endl;
	out << "\tName: " << pg.name << endl;
	out << "\tAge: " << pg.age << endl;
	out << "\tMajor: " << pg.major << endl;
	out << "\tCredits: " << pg.researchCredits << endl;
	return out;
}

#endif
