/*
 * Grect.h
 *
 *  Created on: Apr 2, 2022
 *      Author: win10
 */

#ifndef GRECT_H_
#define GRECT_H_
#include "GObject.h"

class Grect: public GObject {
public:
	Grect(int,int,int,int);
	int get_width();
	int get_height();
	std::string to_string();
private:
	int width, height;
};

#endif /* GRECT_H_ */
