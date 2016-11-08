/*
 * Pirate.cpp
 *
 *  Created on: Nov 8, 2016
 *      Author: dekoii
 */
#include <iostream>
#include "Pirate.h"

using namespace std;


int Pirate::drink_rum() {
  return this->rumcount++;
}

string Pirate::hows_goin_mate() {
  return (this->rumcount < 5 ? "Nothin\'" : "Arrrrrr!!");
}

