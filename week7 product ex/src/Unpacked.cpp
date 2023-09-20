/*
 * Unpacked.cpp
 *
 *  Created on: May 28, 2022
 *      Author: win10
 */

#include "Unpacked.h"

int Unpacked::totalPrice = 0;
Unpacked::Unpacked(std::string s1, std::string s2,std::string s3, double s4, double s5):
Product(s1,s2),type(s3), kgprice(s4), totalkg(s5){
	totalPrice+= s4*s5;
}

std::string Unpacked::to_string(){
	return type + " " + Product::to_string();
}

