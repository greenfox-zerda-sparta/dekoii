#include <iostream>
#include <string>

using namespace std;

void greeting( string );

int main() {
  string i = "Jozsi";
  // create a function that takes a string argument and greets it.

  greeting(i);

  return 0;
}



void greeting(string i){


  cout << "Hello " << i << "!";
}
