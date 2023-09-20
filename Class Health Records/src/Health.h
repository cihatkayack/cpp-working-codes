/*
 * Health.h
 *
 *  Created on: Mar 29, 2022
 *      Author: win10
 */

#include <iostream>
#include <string>
using namespace std;

class Health {
public:
	Health(string, string, int, int, int);
	void set_name(string);
	void set_gender(string);
	void set_age(int);
	void set_height(int);
	void set_weight(int);
	string get_name();
	string get_gender();
	double get_age();
	double get_height();
	double get_weight();
	double bmi();
	double max_heartrate();
	void targetrate();
	void inf_about_user();
private:
	string name, gender;
	double age, height, weight, bmi_count, maxheart, target1, target2;

};
