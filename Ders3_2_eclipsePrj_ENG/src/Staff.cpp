#include "Staff.h"

int Staff::num_staff = 0;
Staff::Staff(std::string name, std::string TC, Date date):name(name),TC_ID(TC),
		starting_date(date){
	num_staff++;
	staff_id = 1000 + num_staff;
}

std::string Staff::to_string() const{
	std::string out_str = "----------------------\n";
	out_str += ("Name: " + name + "\n");
	out_str += ("TC-ID: " + TC_ID + "\n");
	out_str += ("Staff-id: " + std::to_string(staff_id) + "\n");
	return out_str;
}
int Staff::get_num_staff(){
	return num_staff;
}
