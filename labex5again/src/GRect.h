/*
 * GRect.h
 *
 *  Created on: Apr 4, 2022
 *      Author: win10
 */

#ifndef GRECT_H_
#define GRECT_H_
#include <string>
#include "GObject.h"
#include "Point.h"

class GRect: public GObject {
public:
	GRect(int,int,int,int);
	int getWidth() const;
	int getHeight() const;
	void setFilled(bool);
	std::string to_string();
private:
	int width, height;
	bool filled;
	void commputeWidht();
	void computeHeight();
};

#endif /* GRECT_H_ */
