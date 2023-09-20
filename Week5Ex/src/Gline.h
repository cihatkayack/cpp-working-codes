/*
 * Gline.h
 *
 *  Created on: Apr 2, 2022
 *      Author: win10
 */

#ifndef GLINE_H_
#define GLINE_H_
#include "GObject.h"

class Gline: public GObject {
public:
	Gline(int,int,int,int,int);
	std::string to_string();
private:
	int thickness;
};

#endif /* GLINE_H_ */
