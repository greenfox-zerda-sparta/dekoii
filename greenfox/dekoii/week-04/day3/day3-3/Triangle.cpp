#include <iostream>
#include <string>

#include "Shape.hpp"
#include "Triangle.hpp"

using namespace std;

Triangle::Triangle(float Twidth, float Theight) {
  this->width = Twidth;
  this->height = Theight;
  this->mArea = setArea(Twidth, Theight);

}


float Triangle::setArea(float w, float h) {
  return mArea = (w * h) / 2;

}

float Triangle::getArea() {
  return this->mArea;

}

string* Triangle::getName() {
	return new string("Triangle");
}
