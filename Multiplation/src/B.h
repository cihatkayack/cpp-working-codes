/*
 * B.h
 *
 *  Created on: Apr 2, 2022
 *      Author: win10
 */

#ifndef B_H_
#define B_H_
#include "A.h"

class B: public A {
public:
	B(int, int);
	int multiplation();
private:
	int mult;
};

#endif /* B_H_ */
