#include <iostream>
#include <string>

#include "Song.hpp"
#include "Rock.hpp"
#include "Reggae.hpp"
#include "Pop.hpp"

using namespace std;

int main() {

  Rock song1("Rammstein", "Engel");

  song1.rateTheSong(5);
  song1.rateTheSong(4);
  cout << song1.setAvgRateOfSongs() << endl;

  Reggae song2("Shaggy ", "It wasn\'t me ");
  song2.rateTheSong(4);
  song2.rateTheSong(3);
  cout << song2.setAvgRateOfSongs() << endl;

  Pop song3("Rick Astley", "Never gonna give you up");
  song3.rateTheSong(3);
  song3.rateTheSong(5);

  cout << song3.setAvgRateOfSongs() << endl;


  return 0;
}


