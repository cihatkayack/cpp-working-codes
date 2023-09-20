/*
 * Employe.h
 *
 *  Created on: Apr 1, 2022
 *      Author: win10
 */

#ifndef EMPLOYE_H_
#define EMPLOYE_H_
#include <iostream>
#include <string>

class Employe {
public:
	Employe(std::string, std::string, int);
	std::string get_firstname();
	std::string get_lastname();
	void set_salary(int);
	int get_salary();
	std::string to_stringmaas();
	int show_yearlysalary();
	void give_raise();
private:
	std::string firstn, lastn;
	int salary, new_salary;
};

#endif /* EMPLOYE_H_ */
