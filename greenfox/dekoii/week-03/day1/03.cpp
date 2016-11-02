#include <iostream>

using namespace std;

/**
 * Please create a program that asks for a count when it starts.
 * It should ask for a number count times, then it shoud print the average of the nubmers.
 * It should delete any dynamically allocated resource before the program exits.
 */

int main() {
  
  cout << "How many numbers u want?";
  int count;
  cin >> count;

  int* pointer = NULL;
  pointer = new int [count];
  
  for (int i = 0; i < count; i++){
    cout << "Add a number:" << endl;
    int input;
    cin >> input;
    pointer[i] = input;
  }

  int sum = 0;

  for (int k = 0; k < count; k++){
     sum += pointer[k];
    }

  int avg = sum / count;
  
  cout << avg;
  delete []pointer;

  return 0;
}
