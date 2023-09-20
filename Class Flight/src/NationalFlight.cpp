/*
 * NationalFlight.cpp
 *
 *  Created on: Apr 1, 2022
 *      Author: win10
 */

#include "NationalFlight.h"

NationalFlight::NationalFlight(std::string s1, std::string s2, std::string s3, Time s4, Time s5):
Flight(s1,s2,s3,s4), service_time(s5) {}

std::string NationalFlight::to_string(){
	std::string str_out;
	str_out = get_exitcity() + "-" + get_destinationcity() + " Flight no: " + get_flightno() + " Arrived Time: " + get_time().to_string() +
			" Service Time: " + service_time.to_string();
	return str_out;
}

