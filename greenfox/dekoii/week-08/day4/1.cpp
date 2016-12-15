#include <iostream>
#include <string>

using namespace std;

int countDown(int a) {
  if ( a > 0) {
    cout << a; 
    return countDown(a - 1); 
  } else {
    return 0;
  }
}


int main() {
// write a recursive function
// that takes one parameter: n
// and counts down from n
  cout << countDown(6);

  return 0;
}

