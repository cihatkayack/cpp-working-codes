/*
 * GRect.cpp
 *
 *  Created on: Apr 4, 2022
 *      Author: win10
 */

#include "GRect.h"



GRect::GRect(int s1,int s2,int s3,int s4):
GObject(s1,s2,s3,s4){
	commputeWidht();
	computeHeight();
	filled = false;
}
int GRect::getWidth() const{
	return width;
}
int GRect::getHeight() const{
	return height;
}
void GRect::setFilled(bool input){
	filled = input;
}
std::string GRect::to_string(){
	std::string out_str;
	out_str = getColor() + " GRect with width " + std::to_string(width) +
			"," + " height: " + std::to_string(height) + " at start point: " +
			getStartPoint().to_string() ;
	return out_str;
}

void GRect::commputeWidht(){
	width = getEndPoint().x - getStartPoint().x;
}
void GRect::computeHeight(){
	height = getEndPoint().y - getStartPoint().y;
}


