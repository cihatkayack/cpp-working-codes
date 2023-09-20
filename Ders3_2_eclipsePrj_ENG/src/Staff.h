#ifndef STAFF_H_
#define STAFF_H_
#include <string>
#include "Date.h"
class Staff {
public:
	Staff(std::string, std::string, Date);
	std::string to_string() const;
	static int get_num_staff();
private:
	std::string name, TC_ID;
	int staff_id;
	Date starting_date;
	static int num_staff;
};

#endif /* STAFF_H_ */
