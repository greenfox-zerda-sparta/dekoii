#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <vector>

using namespace std;

int main() {
	//Create a vector of integers
	//reserve place for 10 element, then fill those place with random numbers between 0 and 10

  vector<int> v;
  v.reserve (10);
  for (int i = 0; i < 10; i++) {
    int number = rand () % 10 + 1;
    v.push_back( number);
  }

  return 0;
}
