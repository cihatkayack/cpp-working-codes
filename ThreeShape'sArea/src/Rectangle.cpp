/*
 * Rectangle.cpp
 *
 *  Created on: Apr 2, 2022
 *      Author: win10
 */

#include "Rectangle.h"

Rectangle::Rectangle(double h , double w):Area(h,w), RectangleArea(0){

}
double Rectangle::rectanglearea(){
	RectangleArea = get_height() * get_width();
	return RectangleArea;
}
