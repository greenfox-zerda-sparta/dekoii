#include <iostream>
#include <string>
#include <map>
// write a function that takes a string and returns a map
// the map should have the letters of the string as keys and 
// it should have integers as values that represents how many times the
// letter appeared int the string


using namespace std;

map<char, int> mapFiller (string& str) {
  map<char, int> mymap;
  int x = 1;
  for(string::iterator it = str.begin(); it != str.end(); it++) {
    if (mymap.find(*it) != mymap.end()) {
      mymap.find(*it)->second += 1;
    } else {
      mymap.insert(pair<char, int>(*it, x));
    }
  }
  return mymap;
}


int main() {

  string str = "ywrite a function that takes";
  map<char, int> m = mapFiller(str);
  for (map<char, int>::iterator it = m.begin(); it != m.end(); it++) {
    cout << it->first << it->second << endl; 
  }

  return 0;
}
