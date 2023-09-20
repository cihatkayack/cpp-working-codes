/*
 * GObject.cpp
 *
 *  Created on: Apr 4, 2022
 *      Author: win10
 */

#include "GObject.h"

GObject::GObject(int x1, int y1, int x2, int y2):
start(x1, y1), end(x2, y2){

}
Point GObject::getStartPoint() const{
	return start;
}
Point GObject::getEndPoint() const{
	return end;
}
std::string GObject::getColor(){
	return color;
}
void GObject::setColor(std::string value){
	color = value;
}
