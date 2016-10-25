#include <iostream>
#include <string>

using namespace std;

int multiply(int);

int main() {
  int j = 123;
  // create a function that doubles it's input
  // double j with it
  int multi;

  multi = multiply(j);

  cout << multi;
  return 0;
}

int multiply(int a){

  a *= 2;
  
  return a;
}
