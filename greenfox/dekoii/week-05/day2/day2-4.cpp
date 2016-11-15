#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

  ifstream myFourthFile;
  myFourthFile.open("4thexercise.txt");
  string content;

  while ( myFourthFile >> content) {
    cout << content << '\n';
  }

  myFourthFile.close();

  return 0;
}

