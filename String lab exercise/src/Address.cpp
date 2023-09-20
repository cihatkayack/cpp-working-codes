/*
 * Address.cpp
 *
 *  Created on: Apr 11, 2022
 *      Author: win10
 */

#include "Address.h"

int Address::numofadress = 0;

Address::Address(std::string isim, std::string sehir, std::string postacod) {
	numofadress++;
}
void Address::set_name(std::string value){
	name = "";
	int count = 0;
	for (unsigned int i = 0; i < value.length(); i++){
		if(isdigit(value[i])){
			count++;
		}
		if(value.length() < 4){
			count++;
		}
	}
	if (count > 0){
		name = "";
	}else if(count == 0){
		name = value;
	}
}
void Address::set_city(std::string value){
	int count = 0;
	for (unsigned int i = 0; i < value.length(); i++){
		if(isdigit(value[i])){
			count++;
		}
		if(value.length() < 3){
			count++;
		}
	}
	if (count > 0){
		city = "";
	}else if(count == 0){
		for(unsigned int j = 0; j < 3; j++){
			city += toupper(value[j]);
		}
	}
}
void Address::set_postalcode(std::string value) {
	int count = 0;
	for (unsigned int i = 0; i < value.length(); i++){
		if(isalpha(value[i])){
			count++;
		}
	}
	if (count > 0){
		postalCode = "";
	}else if(count == 0){
		postalCode = value;
	}
}
std::string Address::get_name(){
	return name;
}
std::string Address::get_city(){
	return city;
}
std::string Address::get_postalcode(){
	return postalCode;
}
int Address::get_numofadress(){
	return numofadress;
}
std::string Address::to_string(){
	return name + ": " + get_city() + ", " + get_postalcode();
}
