/*
 * InternationalFlight.h
 *
 *  Created on: Apr 1, 2022
 *      Author: win10
 */

#ifndef INTERNATIONALFLIGHT_H_
#define INTERNATIONALFLIGHT_H_
#include "Flight.h"
class InternationalFlight: public Flight {
public:
	InternationalFlight(std::string, std::string, std::string, Time, std::string, std::string);
	std::string to_string();
private:
	std::string exit_country, departure_country;
};

#endif /* INTERNATIONALFLIGHT_H_ */
