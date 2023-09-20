/*
 * Vechicle.h
 *
 *  Created on: Apr 2, 2022
 *      Author: win10
 */

#ifndef VECHICLE_H_
#define VECHICLE_H_
#include <iostream>
#include <string>

class Vechicle {
public:
	Vechicle(int, std::string, std::string, int, int);
	std::string get_brand() const;
	std::string get_color() const;
	int get_fuel() const;
	int get_capacity() const;
	int get_maxspeed() const;
private:
	std::string brand, color;
	int fuelamount, capacity, maxspeed;
};

#endif /* VECHICLE_H_ */
