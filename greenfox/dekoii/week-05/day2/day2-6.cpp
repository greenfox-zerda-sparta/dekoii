#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string copyByFileName(string filename);

int main() {

  cout << copyByFileName("first_excercise.txt");

  return 0;
}


string copyByFileName(string filename) {
  ifstream myFifthFile(filename.c_str());
  string content;

  while (getline (myFifthFile,content));
  myFifthFile.close();

  return content;


}
