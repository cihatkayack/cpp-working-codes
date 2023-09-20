/*
 * GLine.cpp
 *
 *  Created on: Apr 4, 2022
 *      Author: win10
 */

#include "GLine.h"

GLine::GLine(int s1, int s2, int s3, int s4, int s5):
GObject(s1,s2,s3,s4), thickness(s5){

}
std::string GLine::to_string(){
	std::string Satir;
	Satir = getColor() + " Gline with thickness " + std::to_string(thickness) +
			" at start point: " + getStartPoint().to_string() +
			" and end point: " + getEndPoint().to_string();


	return Satir;
}
