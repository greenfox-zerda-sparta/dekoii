#include <string>
#include <iostream>

using namespace std;

struct Pirate {
  string name;
  bool has_wooden_leg;
  short int gold_count;
};

// Create a function that takes an array of pirates (and it's length) then returns the sum of the golds of all pirates

// Create a function that takes an array of pirates (and it's length) then returns the average of the gold / pirate

// Create a function that takes an array of pirates (and it's length) then returns the name of the
// richest that has wooden leg

int goldOfAll(Pirate* pointer, int piratesCount);
float avgGold(Pirate array[], int piratesCount);
string richestWood(Pirate array[], int piratesCount);

int main() {
  Pirate pirates[] = {
    {"Jack", false, 18},
    {"Uwe", true, 8},
    {"Hook", true, 12},
    {"Halloween kid", false, 0},
    {"Sea Wolf", true, 14},
    {"Morgan", false, 1}
  };


  cout << goldOfAll(pirates, 6) << endl;
  cout << avgGold(pirates, 6) << endl;
  cout << richestWood(pirates, 6) << endl;

  return 0;
}

int goldOfAll(Pirate pointer[], int piratesCount) {
  short int sumGold = 0;

  for (int i = 0; i < piratesCount; i++){

    sumGold += pointer[i].gold_count;
  }
  return sumGold;
}

float avgGold(Pirate array[], int piratesCount) {

  float avgMoney = float (goldOfAll(array,piratesCount)) / float (piratesCount);

  return avgMoney;
}

string richestWood(Pirate array[], int piratesCount){
  int temp = 0;
  int tempindex = 0;
  for (int i = 0; i < piratesCount; i++){

    if ( array[i].has_wooden_leg && array[i].gold_count > temp){

      temp = array[i].gold_count;
      tempindex = i;
    }

  }
  return array[tempindex].name;
}
