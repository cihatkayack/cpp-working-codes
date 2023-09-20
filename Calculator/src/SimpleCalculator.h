/*
 * SimpleCalculator.h
 *
 *  Created on: Apr 2, 2022
 *      Author: win10
 */

#ifndef SIMPLECALCULATOR_H_
#define SIMPLECALCULATOR_H_
#include <iostream>
#include <string>
#include <cmath>

class SimpleCalculator {
public:
	SimpleCalculator(double, double);
	double get_num1();
	double get_num2();
	double plus();
	double extraction();
	double multiplation();
	double devide();
private:
	double num1, num2;
};

#endif /* SIMPLECALCULATOR_H_ */
