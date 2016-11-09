/*
 * Square.cpp
 *
 *  Created on: Nov 9, 2016
 *      Author: dekoii
 */
#include <iostream>
#include <string>

#include "Square.hpp"

using namespace std;

string* Square::getName() {
	return new string("Square");
}
