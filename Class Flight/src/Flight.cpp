/*
 * Flight.cpp
 *
 *  Created on: Apr 1, 2022
 *      Author: win10
 */

#include "Flight.h"

int Flight::flight_num = 0;

Flight::Flight(std::string ec, std::string dc, std::string fn, Time dt):
exit_city(ec),destination_city(dc),flightno(fn), departure_time(dt) {
	flight_num++;
}
std::string Flight::get_exitcity(){
	return exit_city;
}
std::string Flight::get_destinationcity(){
	return destination_city;
}
std::string Flight::get_flightno(){
	return flightno;
}
Time Flight::get_time(){
	return departure_time;
}
int Flight::get_flight_num(){
	return flight_num;
}
std::string Flight::to_string(){
	return exit_city + "-" + destination_city + " Flight no: " + flightno + " Arrived Time: " + departure_time.to_string();
}
