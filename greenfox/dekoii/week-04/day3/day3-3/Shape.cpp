#include <iostream>
#include <string>

#include "Shape.hpp"

using namespace std;


Shape::Shape() {
  this->width = width;
  this->height = height;
  this->mArea = setArea();
}

float Shape::setArea () {

  return this->mArea = 0.0;
}

float Shape::getArea() {

  return this->mArea;
}

string* Shape::getName() {

  return new string ("Generic Shape");
}

Shape::~Shape() {}
