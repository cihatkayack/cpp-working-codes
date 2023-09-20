/*
 * Oval.h
 *
 *  Created on: Apr 2, 2022
 *      Author: win10
 */

#ifndef OVAL_H_
#define OVAL_H_
#include "Area.h"

class Oval: public Area {
public:
	Oval(double);
	double ovalarea();
private:
	double OvalArea;
};

#endif /* OVAL_H_ */
