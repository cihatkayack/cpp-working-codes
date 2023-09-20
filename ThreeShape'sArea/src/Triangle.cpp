/*
 * Triangle.cpp
 *
 *  Created on: Apr 2, 2022
 *      Author: win10
 */

#include "Triangle.h"

Triangle::Triangle(double h, double w):Area(h,w),TriagngleArea(0){

}
double Triangle::trianglearea(){
	TriagngleArea = (get_height() * get_width()) / 2;
	return TriagngleArea;
}
