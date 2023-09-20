/*
 * Academic.h
 *
 *  Created on: Apr 2, 2022
 *      Author: win10
 */

#ifndef ACADEMIC_H_
#define ACADEMIC_H_
#include "Staff.h"

class Academic: public Staff {
public:
	Academic(std::string, std::string, int, Date, std::string);
	std::string to_string();
private:
	std::string title;
};

#endif /* ACADEMIC_H_ */
