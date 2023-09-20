/*
 * GLine.h
 *
 *  Created on: Apr 4, 2022
 *      Author: win10
 */

#ifndef GLINE_H_
#define GLINE_H_
#include <string>
#include "GObject.h"


class GLine: public GObject {
public:
	GLine(int, int, int, int, int);
	std::string to_string();
private:
	int thickness;
};

#endif /* GLINE_H_ */
