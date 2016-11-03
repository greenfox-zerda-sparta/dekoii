#include <string>
#include <iostream>

using namespace std;

enum CarType {VOLVO, TOYOTA, LAND_ROVER, TESLA};

struct Car {
  CarType type;
  double km;
  double gas;
};

// Write a function that takes a Car as an argument and prints all it's stats
// If the car is a Tesla it should not print it's gas level

void printInformation(Car carInstance);

int main() {

  Car Tesla =  { TESLA, 12000, 14.5};

  printInformation(Tesla);

  return 0;
}

void printInformation(Car carInstance) {

  string carNames[4] = {"Volvo", "Toyota", "Land_Rover", "Tesla"};

  cout << "Type:   " << carNames[carInstance.type] << "\n";
  cout << "Km:  " << carInstance.km << "\n";
  cout << "Gas: " << (carInstance.type != TESLA ? carInstance.gas : 0)<< "\n"; // can't be done this way, if cycle needed!!!
}
