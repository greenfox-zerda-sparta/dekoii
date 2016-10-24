
#include <iostream>
#include <cmath>

using namespace std;

int main() {

	float w = 24.0;
	int out = 0;
	float x = 2.0;
	
	
	if ( w % x == 0.0){
	/*
	 *if float changed to int it should work
	 *mathematically it is hard to imagine a remainder in the case of floats
	 *but in this particular case it is not
	*/
		out++;
		cout << out;
	}
	
	// if w is even increment out by one
	return 0;
}


