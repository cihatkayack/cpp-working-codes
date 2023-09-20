/*
 * Car.cpp
 *
 *  Created on: Apr 2, 2022
 *      Author: win10
 */

#include "Car.h"


Car::Car(int s1, std::string s2,  std::string s3, int s4, int s5):
	Vechicle(s1,s2,s3,s4,s5){
}
std::string Car::to_string(){
	std::string str_out;
	str_out = get_brand() + "\n" + std::to_string(get_maxspeed()) + " KM/H" + "\n" + std::to_string(get_capacity()) + " Person "+
			"\n" + get_color() + "\n" + std::to_string(get_fuel()) + " L";
	return str_out;
}
