#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
	int j1 = 10;
	int j2 = 3;
	
	int a = pow (j2,2);
	int b = pow (j2,3);
	
	
	if (j1 > a){
	
		cout << "the square of number j2 is " << a << " \nwhich is smaller than j1.";
	}else {
	
		cout << "j1  is not higher than j2 squared.";
	}
	
	if (j1 < b){
	
		cout << "\nj1 is smaller than j2 cubed";
	
	}else {
	
		cout << " j1 is not smaller than j2 on the power of 3.";
	}
	// tell if j1 is higher than j2 squared and smaller than j2 cubed
	return 0;
}
