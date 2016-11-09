#include <iostream>
#include <string>

#include "Shape.hpp"

using namespace std;

#ifndef SQUARE_HPP_
#define SQUARE_HPP_

class Square : public Shape {

public:
  Square(float x);
  float setArea(float x);
  string* getName();
  float getArea();




};

#endif /* SQUARE_HPP_ */
