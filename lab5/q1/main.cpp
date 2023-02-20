#include <iostream>
#include "Student.h"
#include "UndergraduateStudent.h"
#include "GraduateStudent.h"
#include "UGTypes.h"
#include "PGTypes.h"

int main() {
	Freshman s1("Abhishek", 20, "Mechanical", 9.5);
	cout << endl;
	Sophomore s2("Anish", 21, "ECE", 8.44);
	cout << endl;
	Junior s3("Saksham", 18, "Computer Science", 8.59);
	cout << endl;
	Senior s4("Sachin", 19, "Electrical", 7.8);
	cout << endl;
	
	MastersStudent s5("Richa", 26, "Operating System", 9);
	cout << endl;
	DoctoralStudent s6("Hitesh", 23, "Artificial Intelligence", 5);
	
	return 0;
}
