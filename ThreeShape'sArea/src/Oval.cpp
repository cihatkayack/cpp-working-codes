/*
 * Oval.cpp
 *
 *  Created on: Apr 2, 2022
 *      Author: win10
 */

#include "Oval.h"

Oval::Oval(double r):Area(r),OvalArea(0){

}
double Oval::ovalarea(){
	OvalArea = get_radius() * get_radius() * (3.14159);
	return OvalArea;
}
