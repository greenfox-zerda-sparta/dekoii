#include <iostream>
#include <string>

#include "Song.hpp"

using namespace std;

int main() {

  Song song1("Bob Marley", "Buffalo Soldier");

  song1.rateTheSong(5);
  song1.rateTheSong(4);

  cout << song1.getAvgRateOfSong() << endl;



  return 0;
}


