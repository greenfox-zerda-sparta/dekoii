#include <iostream>
#include <string>

#include "Shape.hpp"

using namespace std;

#ifndef TRIANGLE_HPP_
#define TRIANGLE_HPP_


class Triangle : public Shape {

public:
  string* getName();

  ~Triangle() {}
};










#endif
