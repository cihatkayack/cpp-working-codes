/*
 * operations.cpp
 *
 *  Created on: Apr 17, 2022
 *      Author: win10
 */

#include "Vector.h"
#include "operations.h"

Vector sum(Vector v1,Vector v2){
	Vector summary;
	summary.set_x(v1.get_x() + v2.get_x());
	summary.set_y(v1.get_y() + v2.get_y());
	return summary;
}
Vector multiply(Vector v1,Vector v2){
	Vector multiply;
	multiply.set_x(v1.get_x()*v2.get_x() - v1.get_y()*v2.get_y());
	multiply.set_y(v1.get_x()*v2.get_y() + v1.get_y()*v2.get_x());
	return multiply;
}


