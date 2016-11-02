#include <iostream>



using namespace std;

/**
 * Create a function called "range" that creates a new array and returns a pointer to it.
 * It should fill the array with numbers based on it's paramters.
 * It should take 3 paramters:
 * int from: the first number in the array
 * int to: it will fill the array till it would reach this number (so this number is not in the array)
 * int step: the step between the numbers
 *
 * Examples:
 * range(0, 10, 2) -> {0, 2, 3, 4, 5, 6, 8}
 * range(1, -8, -3) -> {1, -2, -5}
 *
 * It should delete any dynamically allocated resource before the program exits.
 */
int* range(int firstNum, int numExcluded, int stepNum);

int main() {
  
  int firstNum = 0;
  int numExcluded = 10;
  int stepNum = 2;

  int* temp = range(0,10,2);

  int arrayLength = (firstNum + numExcluded) / stepNum;

  for (int k = 0; k < arrayLength; k++){ // should be fed only with the range to be printed
       cout << temp[k] << ' ';
  }
  
  delete []temp;
  
  return 0;
}

int* range(int firstNum, int numExcluded, int stepNum){

  int arrayLength = (firstNum + numExcluded) / stepNum;
  
  int* pointer = new int[arrayLength];
  
  for (int i = 0; i < arrayLength; i++){
  
    pointer[i] = firstNum + stepNum * i;
  
  }
  return pointer;
}
