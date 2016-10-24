#include <iostream>
#include <string>

using namespace std;

int main() {
	long int i = 1357988018575474;
	long int r = i % 11;
	
	if (r == 0){
	
		cout << "The number assigned to i divided by 11 has 0 as remainder.\nSo 11 is its divisor.";
	
	}else {
	
		cout << "11 is not the divisor of number assigned to i. \nThe reaminde is: " << r;
	}
	// tell if it has 11 as a divisor
	return 0;
}
