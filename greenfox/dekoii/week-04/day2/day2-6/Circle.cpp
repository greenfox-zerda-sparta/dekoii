/*
 * Circle.cpp
 *
 *  Created on: Nov 8, 2016
 *      Author: dekoii
 */
#include <iostream>

#include "Circle.h"

using namespace std;


  double Circle::getCircumference() {
    return this->pi * (this->radius * 2);
  }

  double Circle::getArea() {
    return this->pi * this->radius * this->radius;
  }




