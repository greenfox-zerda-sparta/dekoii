#include <iostream>
#include <string>

using namespace std;

string insertStar (string str, unsigned int index) {
  if (index < str.size()) {
    if (str[index] != '*') {
      string star = "*";
      str.insert(index + 1, star);;
      return insertStar(str, index + 1);
    } else {
      return insertStar(str, index + 1);
    }
  } else {
    return str;
  }
}


int main() {
// Given a string, compute recursively a new string where all the
// adjacent chars are now separated by a "*".
  string a = "csillagok";
  cout << insertStar(a,0);

  return 0;
}

