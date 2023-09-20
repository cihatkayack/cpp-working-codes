/*
 * GradeBook.h
 *
 *  Created on: Mar 29, 2022
 *      Author: win10
 */

using namespace std;
#include <string>
#include <iostream>

class GradeBook {
public:
	GradeBook(string, string);
	void set_coursename(string);
	void set_instname(string);
	string get_coursename();
	string get_instname();
	void display_message();
private:
	string coursename, instructor;
};


