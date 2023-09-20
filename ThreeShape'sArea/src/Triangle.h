/*
 * Triangle.h
 *
 *  Created on: Apr 2, 2022
 *      Author: win10
 */

#ifndef TRIANGLE_H_
#define TRIANGLE_H_
#include "Area.h"

class Triangle: public Area {
public:
	Triangle(double, double);
	double trianglearea();
private:
	double TriagngleArea;
};

#endif /* TRIANGLE_H_ */
