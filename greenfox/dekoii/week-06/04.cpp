#include <iostream>
#include <string>
#include <vector>


using namespace std;

void fillVectorWithInput(vector<char>& v);


int main() {
	//create a vector of chars with the size of zero;
	//write a function where the user can add characters to the end of this vector
  vector<char> v;
  fillVectorWithInput(v);

  return 0;
}


void fillVectorWithInput(vector<char>& v) {
  for (int i = 0; i < 10; i++) {
    char a;
    cout << "give a character" << endl;
    cin >> a;
    v.push_back (a);
  }
}
