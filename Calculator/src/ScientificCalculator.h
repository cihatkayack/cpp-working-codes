/*
 * ScientificCalculator.h
 *
 *  Created on: Apr 2, 2022
 *      Author: win10
 */

#ifndef SCIENTIFICCALCULATOR_H_
#define SCIENTIFICCALCULATOR_H_
#include <cmath>

class ScientificCalculator {
public:
	ScientificCalculator(double);
	double get_number();
	double csin();
	double ccos();
	double ctan();
	double cexp();
private:
	double value;
};

#endif /* SCIENTIFICCALCULATOR_H_ */
