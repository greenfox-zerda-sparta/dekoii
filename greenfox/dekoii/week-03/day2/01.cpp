#include <string>
#include <iostream>

using namespace std;

struct Computer {
  string name;
  long int cpu_speed_hz;
  long int ram_size;
};

void printInformation(Computer computer)
{
    cout << "Name:   " << computer.name << "\n";
    cout << "CPU speed:  " << computer.cpu_speed_hz << "\n";
    cout << "RAM: " << computer.ram_size << "\n";
}

int main() {
  Computer computer = {"Macbook", 3.2e9, 8e9};

  // Change the name of the computer to "Macbook Pro" and print all the stats
  computer.name = "Macbook Pro";

  printInformation(computer);
  return 0;
}
