//============================================================================
// Name        : object-word-1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

class GradeBook{
public:
	void display_message(string courseName) const {
		cout << "Welcome to the Grade Book for\n";
		cout << courseName << endl;
	}
};

int main(){
	GradeBook myGradeBook;
	string nameOfCourse;
	cout << "Please enter the course name:";
	getline(cin,nameOfCourse);
	myGradeBook.display_message(nameOfCourse);
	return 0;
}
