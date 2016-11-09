// Add a variable to the Shape class. Make it "protected".
//    This should be called mArea.
// Create a function that calculates the areas of the shape.
// Update the shapes Triangle and Square to have variables that represent their dimensions,
//   that you will need to calculate the area. One whould be width, the other height.
// Implement getter and setter functions for them. 
// Make sure to call the function that calculates the area and stores it in mArea,
//   in the setter functions. 
// Create a constructor that takes the height and width as it's parameters.
// Create a destructor, that destructs the objects.
// 
// Write code into the main function that uses these.
// Make sure it demonstrates how the class works by printing out the results.

#include <iostream>
#include <string>

#include "Shape.hpp"
#include "Triangle.hpp"
#include "Square.hpp"

using namespace std;

int main() {

  Shape* shape = new Shape();
  Triangle* triangle = new Triangle(3,5);
  Square* square = new Square(4);
  Shape* a;
  cout << "I am a...  " << *shape->getName() << endl;
  cout << "I am a...  " << *triangle->getName() << endl;
  cout << "The triangle is that big: " << triangle->getArea() << endl;;
  cout << "I am a...  " << *square->getName() << endl;

  a = square;
  cout << "I am that " << a->getArea() << " big of a...  " << *a->getName() << endl;

  a = triangle;
  cout << "I am that " << a->getArea() << " big of a...  " << *a->getName() << endl;

  delete shape;
  delete triangle;
  delete square;





  return 0;
}
