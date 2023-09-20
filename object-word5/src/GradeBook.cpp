#include <iostream>
#include "GradeBook.h"
using namespace std;

GradeBook::GradeBook(string name):coursename(name){

}
GradeBook::GradeBook():coursename(){

}

void GradeBook::set_coursename(std::string name){
	coursename = name;
}
string GradeBook::get_coursename() const{
	return coursename;
}
void GradeBook::display_message() const{
	std::cout << get_coursename() << std::endl;
}
