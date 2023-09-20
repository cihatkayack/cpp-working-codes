#ifndef DATE_H_
#define DATE_H_
#include <string>
#include <iostream>
class Date {
public:
	Date(unsigned int,unsigned int,unsigned int);
	void setDay(unsigned int);
	void setMonth(unsigned int);
	void setYear(unsigned int);
	std::string to_string();
private:
	unsigned int day, month, year;
};

#endif /* DATE_H_ */
