#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>
#include <time.h>

using namespace std;

void fillVectorRng(vector<double>& d);
void sortVector(vector<double>& d);
int  getCounter ();


int main() {
	//find how much integer divisor 2400 has
	//create a vector of doubles, reserve place for the divisors of 2400
	//fill this places with random numbers from 0 to 2400
	//sort them in ascending order

  vector<double> d;
  d.reserve (getCounter());
  fillVectorRng(d);
  sortVector(d);

  return 0;
}



void fillVectorRng(vector<double>& d) {
  for (unsigned int i = 0; i < d.capacity(); i++) {
    int number = rand () %  2400;
    d.push_back(number);
  }
}


void sortVector(vector<double>& d) {
  for (unsigned int j = 0; j < d.size(); j++) {
    for (unsigned int i = 0; i < d.size() - 1; i++) {
      if (d[i] > d[i + 1]) {
        swap(d[i], d[i + 1]);
      }
    }
  }
}

int  getCounter() {
  int counter = 0;
  for (int i = 1; i < 2401; i++) {
    if (2400 % i == 0){
    counter++;
    }
  }
  return counter;
}

