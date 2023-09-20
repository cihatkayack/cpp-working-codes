/*
 * InternationalFlight.cpp
 *
 *  Created on: Apr 1, 2022
 *      Author: win10
 */

#include "InternationalFlight.h"

InternationalFlight::InternationalFlight(std::string s1, std::string s2, std::string s3, Time s4, std::string s5, std::string s6):
Flight(s1,s2,s3,s4), exit_country(s5), departure_country(s6){}

std::string InternationalFlight::to_string(){
	std::string str_out;
	str_out = get_exitcity() + "-" + get_destinationcity() + " Flight no: " + get_flightno() + " Arrived Time: " + get_time().to_string();
	str_out += " " + exit_country + "-" + departure_country;
	return str_out;
}
