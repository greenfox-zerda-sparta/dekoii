#include <iostream>
#include <string>

#include "Pirate.h"

using namespace std;

int main() {
    // create a pirate class
    // it should have 2 methods
    // drink_rum()
    // hows_goin_mate()
    // if the drink_rum was called at least 5 times:
    // hows_goin_mate should return "Arrrr!"
    // "Nothin'" otherwise
  cout << "What is your name Pirate?" << endl;
  string name;
  cin >> name;
  Pirate pirate1(name);
  
  int i = 0;
  while (i < 10) {
    cout << "Would you like a rum with me? " << name << " [y/n]" << endl;
    char input;
    char yes = 'y';
    cin >> input;
    if (input == yes) {
      pirate1.drink_rum();
    }else {
      break;
    }
  i++;
  }
  cout << "Ya know whadupp?" << endl;

  cout << pirate1.hows_goin_mate();

  return 0;
}
