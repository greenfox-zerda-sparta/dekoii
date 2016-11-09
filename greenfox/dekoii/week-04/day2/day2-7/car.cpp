/*
 * car.cpp
 *
 *  Created on: Nov 8, 2016
 *      Author: dekoii
 */
#include <iostream>

#include "car.h"


int Car::runKmSinceLastCheck(int runkm) {
  return this->km += runkm;
}
