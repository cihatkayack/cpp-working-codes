/*
 * GradeBook.h
 *
 *  Created on: Mar 29, 2022
 *      Author: win10
 */

#include <iostream>
#include <string>
using namespace std;


class GradeBook {
public:
	explicit GradeBook(string);
	string get_coursename();
	void set_coursename(string);
private:
	string coursename;
};


