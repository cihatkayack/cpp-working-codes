/*
 * kompleks.h
 *
 *  Created on: Mar 28, 2022
 *      Author: win10
 */

#ifndef KOMPLEKS_H_
#define KOMPLEKS_H_


class kompleks {
public:
	kompleks(double, double);
	kompleks();
	void setReel(double);
	void setImajiner(double);
	double getReel();
	double getImajiner();
	void yazdir();
private:
	double reel, imajiner;
};

#endif /* KOMPLEKS_H_ */
