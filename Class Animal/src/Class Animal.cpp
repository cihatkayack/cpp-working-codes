//============================================================================
// Name        : Class.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "Animal.h"
#include "Dog.h"
using namespace std;

int main() {
	Dog dog1;
	dog1.eat();
	dog1.sleep();
	dog1.bark();
	dog1.set_color("Black");
	dog1.set_type("Mammal");
	dog1.to_string();
	return 0;
}
