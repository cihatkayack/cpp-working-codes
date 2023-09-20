//============================================================================
// Name        : object-word4.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "GradeBook.h"
using namespace std;

int main() {
	GradeBook gradebook1("here is my first course");
	GradeBook gradebook2("here is my second course");
//	gradebook3 is checking for the set and constructor methods different
	GradeBook gradebook3;
	string nameofcourse;
	cout << "Enter a course name: ";
	getline(cin, nameofcourse);
	gradebook3.set_coursename(nameofcourse);

	cout << "gradeBook1 created for course: " << gradebook1.get_coursename() << endl;
	cout << "gradeBook2 created for course: " << gradebook2.get_coursename() << endl;
	cout << "gradeBook2 created for course: ";
	gradebook3.display_message();
	cout << endl;
	return 0;
}
