/*
 * B.cpp
 *
 *  Created on: Apr 2, 2022
 *      Author: win10
 */

#include "B.h"

B::B(int s1, int s2):A(s1,s2), mult(0){

}
int B::multiplation(){
	return mult = get_num1() * get_num2();
}
