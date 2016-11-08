#include <iostream>
#include <string>

#include "Circle.h"

using namespace std;

int main() {
    // Create a `Circle` class that takes it's radius as cinstructor parameter
    // It should have a `get_circumference` method that returns it's circumference
    // It should have a `get_area` method that returns it's area
    Circle smallO(3);
    cout << smallO.getCircumference() << endl;
    cout << smallO.getArea() << endl;
  return 0;
}
