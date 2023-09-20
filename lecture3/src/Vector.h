
#ifndef VECTOR_H_
#define VECTOR_H_

#include <iostream>
using namespace std;

class Vector {
public:
	Vector();
	Vector(double, double);
	void setX(double);
	void setY(double);
	double getX() const;
	double getY() const;
	void printValue() const;
	virtual ~Vector();
private:
	double x, y;
};

#endif /* VECTOR_H_ */
