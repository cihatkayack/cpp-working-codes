/*
 * Employee.h
 *
 *  Created on: Mar 29, 2022
 *      Author: win10
 */

#include <iostream>
using namespace std;


class Employee {
public:
	Employee(string, string, int);
	void set_firstname(string);
	void set_lastname(string);
	void set_salary(int);
	string get_firstname();
	string get_lastname();
	int get_salary();
	void raise_salary();
	void display_inf();
private:
	string first_name, last_name;
	int salary, count, raised_salary;
};
