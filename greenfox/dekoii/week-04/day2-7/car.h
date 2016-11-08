/*
 * car.h
 *
 *  Created on: Nov 8, 2016
 *      Author: dekoii
 */

#include <iostream>

using namespace std;


#ifndef CAR_H_
#define CAR_H_

class Car {

private:
  string type;
  int km;

public:
  Car(string type, int initialKm) {
    this->type = type;
    this->km = initialKm;
  }

  int runKmSinceLastCheck(int runkm);



};

#endif /* CAR_H_ */
