#include <iostream>
#include <string>

using namespace std;

string clearStringByLetter (string str, unsigned int index) {
  if (index < str.size()) {
    if (str[index] == 'x') {
      str.erase(index,1);
      return clearStringByLetter(str, index + 1);
    } else {
      return clearStringByLetter(str, index + 1);
    }
  } else {
    return str;
  }
}

int main() {
// Given a string, compute recursively a new string where all the 'x' chars have been removed.
  string a = "axlllxa";
  cout << clearStringByLetter(a,0);

  return 0;
}

