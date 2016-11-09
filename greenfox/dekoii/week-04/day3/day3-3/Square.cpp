/*
 * Square.cpp
 *
 *  Created on: Nov 9, 2016
 *      Author: dekoii
 */
#include <iostream>
#include <string>

#include "Shape.hpp"
#include "Square.hpp"

using namespace std;

Square::Square(float x) {
  this->width = x;
  this->height = x;
  this->mArea = setArea(x);

}


float Square::setArea(float x) {
  return mArea = x * x;

}

float Square::getArea() {
  return this->mArea;

}

string* Square::getName() {
	return new string("Square");
}
