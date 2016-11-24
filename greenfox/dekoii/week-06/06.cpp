#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <vector>

using namespace std;

void printVector(vector<double>& v);

void addToVectorRng(vector<double>& d);



int main() {
	//create a vector of doubles with the size of 30, with every element equal of 1.5
	//create functions that takes this vector, pick the last element of it and adding its value to
	//an other item from the vector(this item place is random) and remove the last element at the end
	//run this function 20 times, then print every element of the vector
  vector<double> d(30, 1.5);

  addToVectorRng(d);
  printVector(d);

  return 0;
}


void addToVectorRng(vector<double>& d) {
  for (int i = 0; i < 20; i++) {
    int vectorSize = d.size();
    int number = rand () %  vectorSize ;
     d[number] += d.back();
    d.pop_back();
  }
}


void printVector(vector<double>& v) {
  for (unsigned int i = 0; i < v.size(); i++) {
    cout << v[i] << ' ';
  }
}
