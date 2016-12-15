#include <iostream>
#include <string>

using namespace std;

unsigned int getThePowerOf(unsigned int a, unsigned int b) {
  if ( b != 1 ) {
    b--;
    return a * getThePowerOf(a,b);
  } else {   
    return a;
  }
}


int main() {
// Given base and n that are both 1 or more, compute recursively (no loops)
// the value of base to the n power, so powerN(3, 2) is 9 (3 squared).
  cout << getThePowerOf(2,4);
  return 0;
}

