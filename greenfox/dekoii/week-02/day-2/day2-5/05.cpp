#include <iostream>
#include <string>

using namespace std;

int main() {
	int e[] = {1, 2, 3, 4, 5};
	// increment the 3rd element, than print all the elements of the array

	for (int i=0; i < sizeof (e) / sizeof(e[0]); i++ ){

		if ( e[2] == 3 ){

			e[2]= e[2]+1;
		}

		cout << e[i];

	}

  return 0;
}
