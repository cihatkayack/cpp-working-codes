/*
 * Address.cpp
 *
 *  Created on: Jun 26, 2022
 *      Author: win10
 */

#include "Address.h"

int Address::numofaddress = 0;

Address::Address(std::string s1,std::string s2, std::string s3):name(s1), postalCode(s3){
	numofaddress++;
	for(int i = 0; i < 3;i++){
		city += toupper(s2[i]);
	}
}
bool Address::setName(std::string value){
	if(value.length() < 4){
		return false;
	}
	int count = 0;
	for(unsigned int i = 0; i < value.length();i++){
		if(isdigit(value[i])){
			count++;
		}
	}
	if(count > 0){
		return false;
	}
	name = value;
	return true;
}
bool Address::setCity(std::string value){
	if(value.length() < 3){
		return false;
	}
	int count = 0;
	for(unsigned int i = 0; i < value.length();i++){
		if(isdigit(value[i])){
			count++;
		}
	}
	if(count > 0){
		return false;
	}
	for(unsigned int j = 0; j < 3;j++){
		city += toupper(value[j]);
	}
	return true;
}
bool Address::setpostalCode(std::string value){
	if(value.length() < 4){
		return false;
	}
	int count = 0;
	for(unsigned int i = 0; i < value.length();i++){
		if(isalpha(value[i])){
			count++;
		}
	}
	if(count > 0){
		return false;
	}
	postalCode = value;
	return true;
}
std::string Address::to_string(){
	return name + " : " + city + " " + postalCode;
}
