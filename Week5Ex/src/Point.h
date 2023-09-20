/*
 * Point.h
 *
 *  Created on: Apr 2, 2022
 *      Author: win10
 */

#ifndef POINT_H_
#define POINT_H_
#include <string>
#include <iostream>

class Point {
public:
	Point();
	Point(unsigned int, unsigned int);
	std::string to_string();
private:
	unsigned int x, y;
};

#endif /* POINT_H_ */
