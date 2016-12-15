#include <iostream>
#include <string>

using namespace std;

unsigned int sumthedigits (unsigned int a) {
  if (a > 0) {
   int b = a % 10;
    a = a / 10; 
    return b + sumthedigits(a);
  } else {
    return 0;
  }
}


int main() {
// Given a non-negative int n,
// return the sum of its digits recursively (no loops).
// Note that mod (%) by 10 yields the rightmost digit (126 % 10 is 6),
// while divide (/) by 10 removes the rightmost digit (126 / 10 is 12).
 cout << sumthedigits (1261);
 
  return 0;
}

