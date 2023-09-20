/*
 * Administrative.h
 *
 *  Created on: Apr 2, 2022
 *      Author: win10
 */

#ifndef ADMINISTRATIVE_H_
#define ADMINISTRATIVE_H_
#include "Staff.h"
class Administrative: public Staff {
public:
	Administrative(std::string, std::string, Date, std::string);
	std::string to_string();
private:
	std::string department;
};

#endif /* ADMINISTRATIVE_H_ */
