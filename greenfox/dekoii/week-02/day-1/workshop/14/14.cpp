#include <iostream>
#include <string>

using namespace std;

int main() {
	std::string n ("The result is: ");
	std::string a ( "55");
	std::string b ( "kg");

	std::string sentence;
	
	sentence = n + a +b;
	
	std::cout << sentence << endl;
	
// concat the product of a and b to the n string
	return 0;
}
