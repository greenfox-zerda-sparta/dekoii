#include <iostream>
#include <string>

using namespace std;

int factorial(int a){

	for (int i = 0; i < a ; i++){
	
	  int fact;
	  fact= a * (a-1);

	}
	return fact;
}

int main() {
  // create a function that returns it's input factorial
  int a= 5;
  
  factorial(a);
  
  cout << factorial(a);
  return 0;
}
