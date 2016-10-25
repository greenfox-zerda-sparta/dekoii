#include <iostream>
#include <string>

using namespace std;

int main() {
  int h[] = {3, 4, 5, 6, 7};
	// print the sum of all numbers in h
  int sum;

  for (int i=0; i < sizeof(h)/ sizeof (h[0]); i++){
  
	  sum += h[i];
  

  
  
  }
  cout << sum;

  return 0;
}
