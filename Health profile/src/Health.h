/*
 * Health.h
 *
 *  Created on: Apr 1, 2022
 *      Author: win10
 */

#ifndef HEALTH_H_
#define HEALTH_H_
#include <string>
#include <iostream>

class Health {
public:
	Health();
	Health(std::string, std::string, std::string, int, int, int, int, int);
	void set_day(int);
	void set_month(int);
	void set_year(int);
	void set_height(int);
	void set_weight(int);
	std::string get_firstname() const;
	std::string get_lastname() const;
	std::string get_gender() const;
	int get_day() const;
	int get_month() const;
	int get_year() const;
	int get_height() const;
	int get_weight() const;
private:
	std::string firstname, lastname, gender;
	int day, month, year, height, weight;
};

#endif /* HEALTH_H_ */
