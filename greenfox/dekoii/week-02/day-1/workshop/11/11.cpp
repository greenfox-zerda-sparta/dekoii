#include <iostream>
#include <string>

using namespace std;

int main() {
	int k = 1521;
	
	int a = k % 3;
	int b = k % 5;
	
	if (a == 0 ){
	
		cout << " dividable by 3";
	
	}else {
	
		cout << "The number is not didivadable by 3 remainder is " << a;
	
	}
	
	if (b == 0){
	
		cout << "\nit is dividable by 5";
	
	}else {
	
		cout << "\nis not dividable by 5 the remainder is "  << b;
	
	}
	// tell if k is dividable by 3 or 5
	return 0;
}
