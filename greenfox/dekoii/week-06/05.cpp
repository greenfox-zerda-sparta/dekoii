#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <vector>

using namespace std;

int main() {
	//create a vector of integers with the size of 10, fill them with random numbers
	//create a vector of doubles and reserve place for 10 items
	//push and item to the end of the vector with the double places
	//print which vectors size is higher (and why?)
  vector<int> v;
  v.reserve (10);
  for (int i = 0; i < 10; i++) {
    int number = rand () % 10 + 1;
    v.push_back( number);
  }
  vector<double> d;
  d.reserve (10);
  d.push_back(3.14);

  cout << (v.size() > d.size() ? "the int vector is bigger ": "the double vector is bigger" );

  return 0;
}
