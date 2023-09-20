#include "Vector.h"

Vector::Vector(): x(0), y(0) {

}
Vector::Vector(double input_x, double input_y): x(input_x), y(input_y) {

}
void Vector::setX(double input){
	x = input;
}
void Vector::setY(double input){
	y = input;
}
double Vector::getX() const{
	return x;
}
double Vector::getY() const{
	return y;
}
void Vector::printValue() const{
	cout << "[" << getX() << " , " << getY() << "]" << endl;
}

Vector::~Vector() {
	// TODO Auto-generated destructor stub
}
