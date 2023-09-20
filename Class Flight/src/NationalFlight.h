/*
 * NationalFlight.h
 *
 *  Created on: Apr 1, 2022
 *      Author: win10
 */

#ifndef NATIONALFLIGHT_H_
#define NATIONALFLIGHT_H_
#include "Flight.h"

class NationalFlight: public Flight {
public:
	NationalFlight(std::string, std::string, std::string, Time, Time);
	std::string to_string();
private:
	Time service_time;
};

#endif /* NATIONALFLIGHT_H_ */
