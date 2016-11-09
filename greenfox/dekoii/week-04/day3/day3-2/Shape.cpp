/*
 * Shape.cpp
 *
 *  Created on: Nov 9, 2016
 *      Author: dekoii
 */

#include <iostream>
#include <string>

#include "Shape.hpp"

using namespace std;

string* Shape::getName() {
	return new string("Generic Shape");
}

