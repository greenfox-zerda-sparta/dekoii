#include <iostream>

using namespace std;

void swap(int *a, int *b);

int main() {
  int high_number = 6655;
  int low_number = 2;

  int* hight_number_pointer = &low_number;
  int* low_number_pointer = &high_number;
  // Please fix the problem and swap where the pointers point,
  // without using the "&" operator.
  cout << hight_number_pointer << " "<< low_number_pointer << endl;

  //swap( hight_number_pointer,low_number_pointer );
  swap (hight_number_pointer, low_number_pointer);
  return 0;
}


void swap (int *high, int *low){

  int *temp1 = high;
  high = low;
  low = temp1;

      cout << high << ' ' << low;
}

