#include <iostream>
#include <vector>
#include <iterator>

bool isContained(std::vector<int>& sortedVector, int a);
void getHalfVector(std::vector<int>& sortedVector, int a, std::vector<int>::iterator middle);
 
int main() {
  
  std::vector<int> sortedVec;
  int a;
  
  sortedVec.push_back(1);
  sortedVec.push_back(2);
  sortedVec.push_back(3);
  sortedVec.push_back(4);
  sortedVec.push_back(5);

  std::cout << std::boolalpha << isContained(sortedVec, 666666) << std::endl;
  std::cout << std::boolalpha << isContained(sortedVec, 2) << std::endl;
  return 0;
}

bool isContained(std::vector<int>& sortedVector, int a) {
  bool isFound = false;

  std::vector<int>::iterator lastElement = (sortedVector.end() - 1);
  std::vector<int>::iterator middle = (sortedVector.begin() +  (sortedVector.size() / 2));
  if (sortedVector.begin() == sortedVector.end()  || *lastElement < a) {
    return isFound;
  } else  if (a == *middle) {
    isFound = true;
    return isFound;
  } else {
    getHalfVector(sortedVector, a, middle);
    isContained(sortedVector, a);
  } 
} 
  
void getHalfVector(std::vector<int>& sortedVector, int a, std::vector<int>::iterator middle) {
  if (a > *middle) {
    sortedVector = std::vector<int>(middle, sortedVector.end());
  } else if ( a < *middle) { 
    sortedVector = std::vector<int>(sortedVector.begin(), middle);
  }
}
