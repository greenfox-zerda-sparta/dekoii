#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <vector>


using namespace std;

void printVector(vector<int>& v);
void fillVector(vector<int>& v);
void removeEven(vector<int> & v);


int main() {
	//create a vector of integers with the size of 20
	//fill this vector with random numbers from 0 to 10
	//print the items of the vector
	//remove the even numbers, then print the items again

  vector<int> v;

  fillVector(v);
  printVector(v);

  cout << endl;

  removeEven(v);
  printVector(v);


  return 0;
}


void printVector(vector<int>& v) {
  for (unsigned int i = 0; i < v.size(); i++) {
    cout << v[i] << ' ';
  }
}


void fillVector(vector<int>& v) {
  for (int i = 0; i < 20; i++) {
    int number = rand () % 10 + 1;
    v.push_back( number);
  }
}


void removeEven(vector<int> & v) {
  for (int i = 0; i < 20; i++) {
    if ((v[i] % 2) == 0) {
      v.erase(v.begin() + i);
      --i;
    }
  }
}
