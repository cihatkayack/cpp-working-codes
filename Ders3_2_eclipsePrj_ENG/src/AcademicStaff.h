#ifndef ACADEMICSTAFF_H_
#define ACADEMICSTAFF_H_
#include <string>
#include "Date.h"
#include "Staff.h"

class AcademicStaff: public Staff {
public:
	AcademicStaff(std::string, std::string, Date, std::string);
	std::string to_string();
private:
	std::string title;
};

#endif /* ACADEMICSTAFF_H_ */
