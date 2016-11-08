#include <iostream>
#include <string>

#include "Triangle.h"

using namespace std;

int main() {
    // Create a triangle class that takes a length parameter and prints a triangle like this:
    //   *
    //   **
    //   ***
    //   ****
    //   *****
    //   ******
    // It should take a number as parameter that describes how many lines the triangle has


  cout << "Please give a number: ";
  int input;
  cin >> input;
  
  cout << "What do you want to draw?" << endl;
  cout << "1. Triangle" << endl;
  cout << "2. Diamond" << endl;
  cout << "3. XmasTree" << endl;
  cout << "Enter a number:" << endl;

  int choice;
  cin >> choice;

  if (choice == 1) {
    Triangle triangle1(input);
  }else if (choice == 2) {
    Diamond diamond1(input);
  }else if (choice == 3) {
    XmasTree xmastree(input);
  }




  return 0;
}
