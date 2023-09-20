/*
 * Vector.h
 *
 *  Created on: Mar 31, 2022
 *      Author: win10
 */

#ifndef VECTOR_H_
#define VECTOR_H_
#include <string>

class Vector {
public:
	Vector();
	void set_x(double);
	void set_y(double);
	double get_x() const;
	double get_y() const;
	std::string to_string() const;
private:
	double x, y;
};

#endif /* VECTOR_H_ */
