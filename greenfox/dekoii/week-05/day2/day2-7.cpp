#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void writeByFileNameAndAddString(string filename, string content);

int main() {

  writeByFileNameAndAddString("first_excercise.txt", "Ezt add hozza!");

  return 0;
}


void writeByFileNameAndAddString(string filename, string content) {
  ofstream my7thFile;
  my7thFile.open(filename.c_str());
  my7thFile << endl << content << endl << content;
  my7thFile.close();

}
