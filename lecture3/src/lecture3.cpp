

#include "Vector.h"
Vector sumVectors(Vector v1, Vector v2){
	Vector sum(v1.getX() + v2.getX(), v1.getY() + v2.getY());
	return sum;
}

int main() {
	Vector v1(3,4), v2(-3,5);
	Vector v3;

	v1.printValue();
	v2.printValue();
	v3.printValue();

	Vector total = sumVectors(v1, v2);
	cout << "Total = ";
	total.printValue();
	return 0;
}
