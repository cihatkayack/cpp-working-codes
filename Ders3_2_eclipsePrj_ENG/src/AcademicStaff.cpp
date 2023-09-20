#include "AcademicStaff.h"

AcademicStaff::AcademicStaff(std::string name, std::string TC, Date date, std::string title):
Staff(name, TC, date), title(title){}

std::string AcademicStaff::to_string(){
	std::string out_str = "----Academic Staff----\n";
	out_str += Staff::to_string();
	out_str += ("Title: " + title + "\n");
	return out_str;
}

