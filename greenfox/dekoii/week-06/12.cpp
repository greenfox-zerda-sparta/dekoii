#include <iostream>
#include <string>
#include <vector>

using namespace std;

void increase2DVectorInnerVectorElement(vector<vector<int> > & v2d, int a, int b);
void print2DVector(vector<vector<int> > & v2d);

int main() {
	//create a vector of vector of integers
	//the inner vectors have 5 integers, all of them 0
	//the outer vector is holding 5 vector
	//create a function which increase a specific element of an inner vector by 1
  vector<int> v(5);
  vector<vector < int> > v2(5,v);
  int a = 3;
  int b = 2;

  increase2DVectorInnerVectorElement(v2, a, b);
  print2DVector(v2);

  return 0;
}

void increase2DVectorInnerVectorElement(vector<vector<int> > & v2d, int a, int b) {
  v2d[a][b]++;
}

void print2DVector(vector<vector<int> > & v2d) {
  for (vector<vector<int> >::size_type i = 0; i < v2d.size(); i++ )
  {
     for (vector<int>::size_type j = 0; j < v2d[i].size(); j++ )
     {
       cout << v2d[i][j] << ' ';
     }
     cout << endl;
  }
}
