/*
 * HybridCalculator.cpp
 *
 *  Created on: Apr 2, 2022
 *      Author: win10
 */

#include "HybridCalculator.h"

HybridCalculator::HybridCalculator(double k1, double k2):SimpleCalculator(k1,k2), ScientificCalculator(0){

}
HybridCalculator::HybridCalculator(double k3):SimpleCalculator(0,0), ScientificCalculator(k3){

}
std::string HybridCalculator::to_string_simple(){
	std::string str_out;
	str_out = "Addition: " + std::to_string(plus()) + "\n" +
			"Extraction: " + std::to_string(extraction()) + "\n" +
			"Multiplation: " + std::to_string(multiplation()) + "\n" +
			"Divide: " + std::to_string(devide());
	return str_out;
}
std::string HybridCalculator::to_string_scientific(){
	std::string str_out;
	str_out = "Sin(" + std::to_string(get_number()) + ")" + " = " + std::to_string(csin()) + "\n" +
			"Cos(" + std::to_string(get_number()) + ")" + " = " + std::to_string(ccos()) + "\n" +
			"Tan(" + std::to_string(get_number()) + ")" + " = " + std::to_string(ctan()) + "\n" +
			"Exp(" + std::to_string(get_number()) + ")" + " = " + std::to_string(cexp());
	return str_out;
}
