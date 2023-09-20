#include "Date.h"


Date::Date(unsigned int d,unsigned int m, unsigned int y){
	setDay(d);setMonth(m);setYear(y);
}
void Date::setDay(unsigned int d){
	if( d >= 1 && d <= 31){
		day = d;
	}else{
		std::cout << "Unexpected day, day set to zero " << std::endl;
		day = 0;
	}
}
void Date::setMonth(unsigned int m){
	if( m >= 1 && m <= 12){
		month = m;
	}else{
		std::cout << "Unexpected month, month set to zero " << std::endl;
		month = 0;
	}
}
void Date::setYear(unsigned int y){
	if( y >= 1 && y <= 2023){
		year = y;
	}else{
		std::cout << "Unexpected year, year set to zero " << std::endl;
		year = 0;
	}
}
std::string Date::to_string(){
	return std::to_string(day) + "." + std::to_string(month) + "."+ std::to_string(year);
}
