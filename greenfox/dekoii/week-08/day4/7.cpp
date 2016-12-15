#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string changeLowerToY (string a, unsigned int index ) {
  if (index < a.size()) {
    if (a[index] == 'x') {
      a[index] = 'Y';
      return changeLowerToY(a,index + 1);
    } else {
      return changeLowerToY(a,index + 1);;
    }
  } else {
    return a;
  }
}



int main() {
// Given a string, compute recursively (no loops) a new string where all the
// lowercase 'x' chars have been changed to 'y' chars.
  string a = "aLxLa";
  cout << changeLowerToY(a,0); 
  return 0;
}
