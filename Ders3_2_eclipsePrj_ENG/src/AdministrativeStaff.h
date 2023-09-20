#ifndef ADMINISTRATIVESTAFF_H_
#define ADMINISTRATIVESTAFF_H_
#include <string>
#include "Date.h"
#include "Staff.h"

class AdministrativeStaff:public Staff {
public:
	AdministrativeStaff(std::string name, std::string TC, Date date, std::string dept);
private:
	std::string department;
};

#endif /* ADMINISTRATIVESTAFF_H_ */
