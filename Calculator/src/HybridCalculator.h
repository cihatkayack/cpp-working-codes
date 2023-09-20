/*
 * HybridCalculator.h
 *
 *  Created on: Apr 2, 2022
 *      Author: win10
 */

#ifndef HYBRIDCALCULATOR_H_
#define HYBRIDCALCULATOR_H_
#include "ScientificCalculator.h"
#include "SimpleCalculator.h"

class HybridCalculator: public SimpleCalculator, ScientificCalculator {
public:
	HybridCalculator(double, double);
	HybridCalculator(double);
	std::string to_string_simple();
	std::string to_string_scientific();
};

#endif /* HYBRIDCALCULATOR_H_ */
