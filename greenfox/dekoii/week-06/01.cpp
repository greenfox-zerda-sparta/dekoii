#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	//create an integer vector with the size of 5 and print the 3rd element of it

  vector<int> v;
  v.reserve(5);

  for (int i = 1; i < 6; i++) {
    v.push_back (i);
  }
  
  cout << v[2];

  return 0;
}
