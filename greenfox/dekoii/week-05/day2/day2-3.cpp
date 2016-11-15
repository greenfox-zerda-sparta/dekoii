#include <iostream>
#include <fstream>

using namespace std;


int main() {

  ofstream myNumbers;
  myNumbers.open("numbers1-20.txt");
  for (int i = 0; i < 21; i++) {
    myNumbers << i << endl;
  }
  myNumbers.close();

  return 0;
}

