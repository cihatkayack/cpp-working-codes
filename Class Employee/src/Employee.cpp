/*
 * Employee.cpp
 *
 *  Created on: Mar 29, 2022
 *      Author: win10
 */

#include "Employee.h"

Employee::Employee(string fname, string lname, int msalary){
	set_firstname(fname);
	set_lastname(lname);
	set_salary(msalary);
}

void Employee::set_firstname(string fname){
	first_name = fname;
}
void Employee::set_lastname(string lname){
	last_name = lname;
}
void Employee::set_salary(int msalary){
	salary = msalary;
}

string Employee::get_firstname(){
	return first_name;
}
string Employee::get_lastname(){
	return last_name;
}
int Employee::get_salary(){
	return salary;
}

void Employee::raise_salary(){
	count = (salary * 10) / 100;
	raised_salary = salary + count;
	if (raised_salary >= 0){
		set_salary(raised_salary);
	}else{
		set_salary(salary);
	}
	display_inf();
}

void Employee::display_inf(){
	cout << get_firstname() << " " << get_lastname();
	cout << get_salary() << endl;
}













