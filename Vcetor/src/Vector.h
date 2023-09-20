/*
 * Vector.h
 *
 *  Created on: Apr 1, 2022
 *      Author: win10
 */

#ifndef VECTOR_H_
#define VECTOR_H_
#include <string>

class Vector {
public:
	Vector();
	Vector(double, double);
	void set_x(double);
	void set_y(double);
	double get_x() const;
	double get_y() const;
	std::string to_string() const;


private:
	double x, y;
};

#endif /* VECTOR_H_ */
