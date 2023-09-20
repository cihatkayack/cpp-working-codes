//============================================================================
// Name        : object-word2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

class GradeBook {
public:
	void set_coursename(string name) {
		coursename = name;
	}
	string get_coursename() const{
		return coursename;
	}
	void display_message() const{
		cout << "Welcome to the Grade Book for\n" << get_coursename() << endl;
	}

private:
	string coursename;
};

int main() {
	GradeBook mygradebook;
	string nameofcourse;
	cout << "Initial course name is: ";
	cout << mygradebook.get_coursename() << endl;
	cout << "Please enter the course name:";
	getline(cin, nameofcourse);
	mygradebook.set_coursename(nameofcourse);
	mygradebook.display_message();
	return 0;
}















