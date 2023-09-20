/*
 * GObject.h
 *
 *  Created on: Apr 2, 2022
 *      Author: win10
 */

#ifndef GOBJECT_H_
#define GOBJECT_H_
#include <string>
#include "Point.h"
#include <iostream>

class GObject: public Point {
public:
	GObject(int,int,int,int);
	Point get_startpoint();
	Point get_endpoint();
	void set_color(std::string);
	std::string get_color();
	std::string to_string();

private:
	Point start, end;
	std::string color;
};

#endif /* GOBJECT_H_ */
