/*
 * GradeBook.cpp
 *
 *  Created on: Mar 29, 2022
 *      Author: win10
 */

#include "GradeBook.h"

GradeBook::GradeBook(string nameofinst, string nameofcourse){
	set_coursename(nameofcourse);
	set_instname(nameofinst);
}
void GradeBook::set_coursename(string name){
	coursename = name;
}
void GradeBook::set_instname(string name){
	instructor = name;
}
string GradeBook::get_coursename(){
	return coursename;
}
string GradeBook::get_instname(){
	return instructor;
}
void GradeBook::display_message(){
	cout << "Welcome the C++ programming course!!" << endl;
	cout << "This course is represent by: " << get_instname() << endl;

}




