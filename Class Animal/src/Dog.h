/*
 * Dog.h
 *
 *  Created on: Apr 2, 2022
 *      Author: win10
 */

#ifndef DOG_H_
#define DOG_H_
#include "Animal.h"

class Dog: public Animal {
public:
	Dog();
	void bark();
	void set_color(std::string);
	void set_type(std::string);
	std::string get_color();
	std::string get_type();
	std::string to_string();
private:
	std::string color, type;
};

#endif /* DOG_H_ */
