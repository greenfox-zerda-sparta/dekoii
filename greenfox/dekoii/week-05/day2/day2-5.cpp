#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

  ifstream myFifthFile("fifth-exercise.txt");
  string content;

  if (myFifthFile.is_open()) {
    while ( getline (myFifthFile,content) ) {
      cout << content << '\n';
    }
    myFifthFile.close();
  }else {
    cerr << "Could not open the file";
    return 2;
  }



  return 0;
}
