#include <iostream>
#include <string>

#include "Shape.hpp"

using namespace std;

#ifndef TRIANGLE_HPP_
#define TRIANGLE_HPP_



class Triangle : public Shape {

public:
  Triangle(float Twidth, float Theight);
  float setArea(float Twidth, float Theight);
  string* getName();
  float getArea();

};


#endif
