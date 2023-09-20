/*
 * Vector.h
 *
 *  Created on: Apr 17, 2022
 *      Author: win10
 */

#ifndef VECTOR_H_
#define VECTOR_H_
#include <string>
#include <iostream>

class Vector {
public:
	Vector(int,int);
	Vector();
	int get_x();
	int get_y();
	void set_x(int);
	void set_y(int);
	std::string to_string();
private:
	int x,y;
};

#endif /* VECTOR_H_ */
