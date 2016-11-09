#include <iostream>
#include <string>

using namespace std;

#ifndef SHAPE_HPP_
#define SHAPE_HPP_

class Shape {

protected:
  float width;
  float height;
  float mArea;

public:
  Shape();
  virtual float getArea();
  virtual float setArea();
  virtual string* getName();
  virtual ~Shape();
};

#endif
