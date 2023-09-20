/*
 * GObject.h
 *
 *  Created on: Apr 4, 2022
 *      Author: win10
 */

#ifndef GOBJECT_H_
#define GOBJECT_H_
#include "Point.h"

class GObject {
public:
	GObject(int, int, int, int);
	Point getStartPoint() const;
	Point getEndPoint() const;
	std::string getColor();
	void setColor(std::string);
private:
	Point start, end;
	std::string color;
};

#endif /* GOBJECT_H_ */
