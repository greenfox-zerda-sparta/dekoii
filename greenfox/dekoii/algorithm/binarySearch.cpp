#include <iostream>
#include <vector>
#include <iterator>

bool isContained(std::vector<int>& sortedVector,int a, std::vector<int>::iterator& middle);
void getHalfVector(std::vector<int>& sortedVector, int a, std::vector<int>::iterator& middle);
 
int main() {
  
  std::vector<int> sortedVec;
  int a;
  
  sortedVec.push_back(1);
  sortedVec.push_back(2);
  sortedVec.push_back(3);
  sortedVec.push_back(4);
  sortedVec.push_back(5);
  std::vector<int>::iterator middle = sortedVec.begin() + (sortedVec.size() / 2);
  std::cout << std::boolalpha << isContained(sortedVec, 666666, middle) << std::endl;
  std::cout << std::boolalpha << isContained(sortedVec, 2, middle) << std::endl;
  return 0;
}

bool isContained(std::vector<int>& sortedVector, int a, std::vector<int>::iterator& middle) {
  bool isFound = false;

  std::vector<int>::iterator lastElement = (sortedVector.end() - 1);
  if (sortedVector.begin() == middle || middle == sortedVector.end()  || *lastElement < a) {
    return isFound;
  } else  if (a == *middle) {
    isFound = true;
    return isFound;
  } else {
    getHalfVector(sortedVector, a, middle);
    isContained(sortedVector, a, middle);
  } 
} 
  
void getHalfVector(std::vector<int>& sortedVector, int a, std::vector<int>::iterator& middle) {
  if (a > *middle) {
    middle =  middle + ((std::distance(middle, sortedVector.end())) / 2);
  } else if ( a < *middle) { 
    middle =  (sortedVector.begin() + (std::distance(sortedVector.begin(), middle) / 2));
  }
}
