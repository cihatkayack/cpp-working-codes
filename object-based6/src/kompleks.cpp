/*
 * kompleks.cpp
 *
 *  Created on: Mar 28, 2022
 *      Author: win10
 */

#include "kompleks.h"
#include <iostream>
using namespace std;

kompleks::kompleks(double r, double i):
	reel(r), imajiner(i){
	//setReel(r); setImajiner(i);
}
kompleks::kompleks():
	reel(0), imajiner(0){
	//setReel(r); setImajiner(i);
}


void kompleks::setReel(double r){
	reel = r;
}
void kompleks::setImajiner(double i){
	imajiner = i;
}
double kompleks::getReel() {
	return reel;
}
double kompleks::getImajiner(){
	return imajiner;
}
void kompleks::yazdir(){
	cout << getReel() << "+j" << getImajiner() << endl;
}
