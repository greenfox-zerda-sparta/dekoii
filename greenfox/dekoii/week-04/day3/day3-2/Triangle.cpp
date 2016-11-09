#include <iostream>
#include <string>

#include "Triangle.hpp"

using namespace std;

string* Triangle::getName () {
  return new string ("Triangle");
}
