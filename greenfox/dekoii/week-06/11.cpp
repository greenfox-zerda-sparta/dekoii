#include <iostream>
#include <string>
#include <vector>

using namespace std;

void increase2DVectorInnerVectorElements(vector<vector<int> > & v2d);
void print2DVector(vector<vector<int> > & v2d);

int main() {
	//create a vector of vector of integers
	//the inner vectors have 5 integers, all of them 0
	//the outer vector is holding 5 vector
	//create a function which increase the given inner vector elements by 1 (one inside vector, holding five 0)

  vector<int> v(5);
  vector<vector < int> > v2(5,v);
  increase2DVectorInnerVectorElements(v2);
  print2DVector(v2);


  return 0;
}


void increase2DVectorInnerVectorElements(vector<vector<int> > & v2d) {
	vector<vector<int> >::size_type i = 3;
     for (vector<int>::size_type j = 0; j < v2d[i].size(); j++ )
     {
        v2d[i][j]++;
     }
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
