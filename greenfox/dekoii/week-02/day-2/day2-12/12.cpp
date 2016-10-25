#include <iostream>
#include <string>

using namespace std;

int sumArray(int,int);

int main() {
  int numbers[] = {4, 5, 6, 7, 8, 9, 10};
  // write your own sum function
  // it should take an array and it's length
  int arraylength = sizeof (numbers)/ sizeof (numbers[0]);
  
  
  sumArray(numbers , arraylength);
  
  
  return 0;
}


int sumArray(int a[] ,int b){

  for (int i = 0; i < int b; i++){

    int sum1;
    sum1 += a[i];
    int sum2;
    sum2 += sum1 + b;
    }
    
    return sum2;
    
}
