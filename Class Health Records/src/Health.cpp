/*
 * Health.cpp
 *
 *  Created on: Mar 29, 2022
 *      Author: win10
 */

#include "Health.h"

Health::Health(string name, string gender, int age, int height, int weight){
	set_name(name);
	set_gender(gender);
	set_age(age);
	set_height(height);
	set_weight(weight);
}
void Health::set_name(string type){
	name = type;
}
void Health::set_gender(string type){
	gender = type;
}
void Health::set_age(int value){
	age = value;
}
void Health::set_height(int value){
	height = value;
}
void Health::set_weight(int value){
	weight = value;
}

string Health::get_name(){
	return name;
}
string Health::get_gender(){
	return gender;
}
double Health::get_age(){
	return age;
}
double Health::get_height(){
	return height;
}
double Health::get_weight(){
	return weight;
}

double Health::bmi(){
	bmi_count = get_weight() / ((get_height()/100) * (get_height()/100));
	return bmi_count;
}

double Health::max_heartrate(){
	maxheart = 220 - get_age();
	return maxheart;
}
void Health::targetrate(){
	target1 = (max_heartrate() * 50) / 100;
	target2 = (max_heartrate() * 85) / 100;
	cout << "Target Range: [" << target1 << "," << target2 << "]" << endl;
}

void Health::inf_about_user(){
	cout << "Name: " << get_name() << endl;
	cout << "Gender: " << get_gender() << endl;
	cout << "Age: " << get_age() << endl;
	cout << "Height: " << get_height() << endl;
	cout << "Weight: " << get_weight() << endl;
	cout << "Max Heart: " << max_heartrate() << endl;
	targetrate();
	cout << "IBM: " << bmi() << endl;
}



