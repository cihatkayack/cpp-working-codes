/*
 * Polinomial.cpp
 *
 *  Created on: Jun 26, 2022
 *      Author: win10
 */

#include "Polinomial.h"

Polinomial::Polinomial(int s1): derece(s1){

}

void Polinomial::takekatsayilar(int value){
	katsayilar.push_back(value);
}

std::string Polinomial::to_string(){
	std::string std_out = "";
	for(int i = 0; i < derece+1; i++){
		std_out += "(" + std::to_string(katsayilar[i]) + ")" + "x^" + std::to_string(i);
	}
	return std_out;
}

double us(int num, int katderece, int derece){
	double result = 1;
	for(int i = 0; i < derece;i++){
		result *= num;
	}
	return katderece*result;
}

double Polinomial::hesapla(int value){
	double result = 0;
	for(int i = 0; i < derece+1;i++){
		result += us(value, katsayilar[i],i);
	}
	return result;
}
