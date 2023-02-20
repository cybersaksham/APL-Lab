#ifndef UGTYPES_H
#define UGTYPES_H

#include "UndergraduateStudent.h"
using namespace std;

class Freshman : public UndergraduateStudent {
public:
	Freshman(string name, int age, string branch, float cgpa) : UndergraduateStudent(name, age, branch, 1, cgpa) {
		cout << "Freshman constructor called" << endl;
	}
};

class Sophomore : public UndergraduateStudent {
public:
	Sophomore(string name, int age, string branch, float cgpa) : UndergraduateStudent(name, age, branch, 2, cgpa) {
		cout << "Sophomore constructor called" << endl;
	}
};

class Junior : public UndergraduateStudent {
public:
	Junior(string name, int age, string branch, float cgpa) : UndergraduateStudent(name, age, branch, 3, cgpa) {
		cout << "Junior constructor called" << endl;
	}
};

class Senior : public UndergraduateStudent {
public:
	Senior(string name, int age, string branch, float cgpa) : UndergraduateStudent(name, age, branch, 4, cgpa) {
		cout << "Senior constructor called" << endl;
	}
};

#endif
