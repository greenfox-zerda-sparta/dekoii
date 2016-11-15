#include <iostream>
#include <fstream>


using namespace std;

int main() {
  ofstream myFirstFile;
  myFirstFile.open("first_excercise.txt");
  myFirstFile << "Janicsak Daniel";
  myFirstFile.close();

  return 0;
}
