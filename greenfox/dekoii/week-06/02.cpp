#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	//create an integer vector with the size of 5 and print all elements of it
  vector<int> v;
  v.reserve(5);

  for (int i = 1; i < 6; i++) {
    v.push_back (i);
  }

  for (int i = 0; i < 5; i++) {
    cout << v[i] << ' ';
  }
  return 0;
}
