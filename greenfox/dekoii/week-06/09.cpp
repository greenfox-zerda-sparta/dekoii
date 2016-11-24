#include <iostream>
#include <string>
#include <vector>

using namespace std;

void print2DVector(vector<vector<int> > & v2d);

int main() {
	//create a vector of vector of integers, yeah a vector that holds vectors of integers
	//the inner vectors have 5 integers, all of them 0
	//the outer vector is holding 5 vector at the begining
	//create a function that will add a new vector of integers to the end of our outer vector
  vector<int> v(5);
  vector<vector<int> > v2(5,v);
  
  vector<int> n(5,1);
  v2.push_back(n);
  print2DVector(v2);

 return 0;
}

void print2DVector(vector<vector<int> > & v2d) {
  for ( std::vector<std::vector<int> >::size_type i = 0; i < v2d.size(); i++ )
  {
     for ( std::vector<int>::size_type j = 0; j < v2d[i].size(); j++ )
     {
        std::cout << v2d[i][j] << ' ';
     }
     std::cout << std::endl;
  }
}
