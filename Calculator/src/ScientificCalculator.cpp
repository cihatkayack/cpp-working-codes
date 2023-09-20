/*
 * ScientificCalculator.cpp
 *
 *  Created on: Apr 2, 2022
 *      Author: win10
 */

#include "ScientificCalculator.h"

ScientificCalculator::ScientificCalculator(double n1):value(n1){}
double ScientificCalculator::get_number(){
	return value;
}
double ScientificCalculator::csin(){
	return sin(value);
}
double ScientificCalculator::ccos(){
	return cos(value);
}
double ScientificCalculator::ctan(){
	return tan(value);
}
double ScientificCalculator::cexp(){
	return exp(value);
}
