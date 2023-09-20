/*
 * AdministrativeStaff.cpp
 *
 *  Created on: Mar 29, 2022
 *      Author: baris
 */

#include "AdministrativeStaff.h"

AdministrativeStaff::AdministrativeStaff(std::string name, std::string TC, Date date, std::string dept):
Staff(name, TC, date), department(dept){}

