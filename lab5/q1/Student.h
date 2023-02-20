#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

class Student {
public:
	string name;
	int age;
	
	Student(string name, int age) : name(name), age(age) {
		cout << "Student constructor called" << endl;
	}
};

#endif
