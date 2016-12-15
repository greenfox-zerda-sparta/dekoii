#include <iostream>
#include <string>

using namespace std;

unsigned int countBunnyEars (unsigned int b) {
  if (b != 0) {
   b--;
   return 2 + countBunnyEars(b); 
  } else {
   return 0;
  }
}

int main() {
// We have a number of bunnies and each bunny has two big floppy ears.
// We want to compute the total number of ears across all the bunnies
// recursively (without loops or multiplication).
  cout << countBunnyEars(2);
  return 0;
}

