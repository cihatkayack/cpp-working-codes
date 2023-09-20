/*
 * Packaged.cpp
 *
 *  Created on: May 28, 2022
 *      Author: win10
 */

#include "Packaged.h"

int Packaged::totalPrice = 0;
Packaged::Packaged(std::string s1, std::string s2,std::string s3, double s4, int s5):
Product(s1,s2), brandmodel(s3), packageprice(s4), packagenumber(s5){
	totalPrice += s4*s5;
}

std::string Packaged::to_string(){
	return brandmodel + " " + Product::to_string();
}
