/*
 * Flight.h
 *
 *  Created on: Apr 1, 2022
 *      Author: win10
 */

#ifndef FLIGHT_H_
#define FLIGHT_H_
#include <string>
#include "Time.h"

class Flight {
public:
	Flight(std::string, std::string, std::string, Time);
	std::string get_exitcity();
	std::string get_destinationcity();
	std::string get_flightno();
	Time get_time();
	static int get_flight_num();
	std::string to_string();
private:
	std::string exit_city, destination_city, flightno;
	Time departure_time;
	static int flight_num;
};

#endif /* FLIGHT_H_ */
