/*
 * SimpleCalculator.cpp
 *
 *  Created on: Apr 2, 2022
 *      Author: win10
 */

#include "SimpleCalculator.h"

SimpleCalculator::SimpleCalculator(double s1, double s2):num1(s1), num2(s2) {

}
double SimpleCalculator::get_num1(){
	return num1;
}
double SimpleCalculator::get_num2(){
	return num2;
}
double SimpleCalculator::plus(){
	return num1 + num2;
}
double SimpleCalculator::extraction(){
	return num1- num2;
}
double SimpleCalculator::multiplation(){
	return num1 * num2;
}
double SimpleCalculator::devide(){
	return num1 / num2;
}
