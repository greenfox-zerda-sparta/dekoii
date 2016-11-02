#include <iostream>

using namespace std;

int main() {
  int* pointer = new int[5];

  // Please allocate a 10 long array and fill it with numbers from 0 to 4, then print the whole array
  // Please delete the array before the program exit
  
  pointer = NULL;
  
  pointer = new int[10];
  
  for(int i = 0; i < 10; i++){

    pointer[i] = i;
  }

  for (int k = 0; k < 10; k++){
  
     cout << pointer[k] << ' ';
  }

     delete []pointer;
  return 0;
}
