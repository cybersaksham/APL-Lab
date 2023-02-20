#ifndef PGTYPES_H
#define PGTYPES_H

#include "GraduateStudent.h"
using namespace std;

class MastersStudent : public GraduateStudent {
public:
	MastersStudent(string name, int age, string major, int researchCredits) : GraduateStudent(name, age, major, researchCredits) {
		cout << "Masters constructor called" << endl;
	};
};

class DoctoralStudent : public GraduateStudent {
public:
	DoctoralStudent(string name, int age, string major, int researchCredits) : GraduateStudent(name, age, major, researchCredits) {
		cout << "Doctoral constructor called" << endl;
	};
};

#endif
