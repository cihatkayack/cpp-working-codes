/*
 * Dog.cpp
 *
 *  Created on: Apr 2, 2022
 *      Author: win10
 */

#include "Dog.h"

Dog::Dog(){

}
void Dog::bark(){
	std::cout << "I can bark! Woof! Woof!" << std::endl;
}
void Dog::set_color(std::string value){
	color = value;
}
void Dog::set_type(std::string value){
	type = value;
}

std::string Dog::get_color(){
	return color;
}
std::string Dog::get_type(){
	return type;
}
std::string Dog::to_string(){
	std::string str_out;
	str_out = "I am a " + get_type() + "\n" + "My color is " + get_color();
	return str_out;
}
