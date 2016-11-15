#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

  ifstream mySecondFile;
  mySecondFile.open("second-exercise.txt");
  string content;
  mySecondFile >> content;
  cout << content;
  mySecondFile.close();

return 0;
}
