/*
 * Point.h
 *
 *  Created on: Apr 4, 2022
 *      Author: win10
 */

#ifndef POINT_H_
#define POINT_H_
#include <iostream>
#include <string>

class Point {
public:
	Point(int, int);
	int x, y;
	std::string to_string() const;
};

#endif /* POINT_H_ */
