/*
 * Vechicle.cpp
 *
 *  Created on: Apr 2, 2022
 *      Author: win10
 */

#include "Vechicle.h"

Vechicle::Vechicle(int s1, std::string s2, std::string s3, int s4, int s5):
	fuelamount(s1), brand(s2), color(s3) ,capacity(s4), maxspeed(s5){}
std::string Vechicle::get_brand() const{
	return brand;
}
std::string Vechicle::get_color() const{
	return color;
}
int Vechicle::get_fuel() const{
	return fuelamount;
}
int Vechicle::get_capacity() const{
	return capacity;
}
int Vechicle::get_maxspeed() const{
	return maxspeed;
}
