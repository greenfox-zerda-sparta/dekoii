#include <iostream>
#include <string>

using namespace std;

int addUp(int a) {
  if ( a > 0) {
    return a + addUp(a - 1); 
  } else { 
    return 0;
  }
}

int main() {
// write a recursive function
// that takes one parameter: n
// and adds numbers from 1 to n
  cout << addUp(5);
  return 0;
}
