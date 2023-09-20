//============================================================================
// Name        : object-word6.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "GradeBook.h"

int main() {
	GradeBook gradebook1("CS101 Introduction to Programmin in C++");
	GradeBook gradebook2("CS102 C++ Data Structures");

	cout << "gradeBook1's initial course name is:" << gradebook1.get_coursename() << endl;
	cout << "gradeBook2's initial course name is:" << gradebook2.get_coursename() << endl;

	gradebook1.set_coursename("CS101 C++ Programming");
	cout << "gradeBook1's course name is: " << gradebook1.get_coursename() << endl;
	cout << "gradeBook2's course name is: " << gradebook2.get_coursename() << endl;


	return 0;
}



