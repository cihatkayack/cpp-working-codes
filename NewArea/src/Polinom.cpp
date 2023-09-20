/*
 * Polinom.cpp
 *
 *  Created on: Jun 27, 2022
 *      Author: win10
 */

#include "Polinom.h"

Polinom::Polinom(double s1):derece(s1){

}
void Polinom::takekatsayilar(int value){
	katsayilar.push_back(value);
}

double us(double katsayi, double value, int derece){
	double result = 1;
	for(int i = 0; i < derece;i++){
		result *= value;
	}
	return katsayi*result;
}

double Polinom::hesaplama(double value){
	double toplam = 0;
	for(unsigned int i = 0; i < katsayilar.size();i++){
		toplam += us(katsayilar[i], value, i);
	}
	return toplam;
}


std::string Polinom::to_string(){
	std::string std_out = "";
	for(unsigned int i = 0; i < katsayilar.size();i++){
		if(i != katsayilar.size()-1){
			std_out += "(" + std::to_string(katsayilar[i]) + ")" + "x^" + std::to_string(i) + " + ";
		}else{
			std_out += "(" + std::to_string(katsayilar[i]) + ")" + "x^" + std::to_string(i);
		}
	}
	return std_out;
}
























