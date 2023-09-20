/*
 * Car.h
 *
 *  Created on: Apr 2, 2022
 *      Author: win10
 */

#ifndef CAR_H_
#define CAR_H_
#include "Vechicle.h"

class Car: public Vechicle {
public:
	Car(int, std::string, std::string, int, int);
	std::string to_string();
};

#endif /* CAR_H_ */
