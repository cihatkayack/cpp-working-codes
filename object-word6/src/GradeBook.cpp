/*
 * GradeBook.cpp
 *
 *  Created on: Mar 29, 2022
 *      Author: win10
 */

#include "GradeBook.h"

GradeBook::GradeBook(string name) {
	set_coursename(name);
}

void GradeBook::set_coursename(string name) {
	if (name.size() <=25){
		coursename = name;
	}else if (name.size() > 25){
		coursename = name.substr(0, 25);
		cerr << "ERROR!!" << endl;
	}
}


string GradeBook::get_coursename(){
	return coursename;
}
