/*
 * Circle.h
 *
 *  Created on: Nov 8, 2016
 *      Author: dekoii
 */

#ifndef CIRCLE_H_
#define CIRCLE_H_

class Circle {

private:
  double radius;
  const double pi = 3.14;

public:
  Circle(double radius) {
    this->radius = radius;
  }

  double getCircumference();
  double getArea();

};

#endif /* CIRCLE_H_ */
