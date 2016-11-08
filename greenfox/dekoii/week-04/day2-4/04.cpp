#include <iostream>
#include <string>

using namespace std;

class Student {
  private:
    string name;
    unsigned int age;
  public:
    Student(string name, unsigned int age) {
      this->age = age;
      this->name = name;
    }

    string greet() {
      return "Hello my name is: " + this->name; 
    }
    string changeName (string nameNew) {
      this->name = nameNew;
      return this->name;
    }
};

int main() {
  // Create a method on student that takes a string as an argument and
  // changes it's name property
  Student student1("John", 21);
  cout << student1.greet() << endl;
  cout << student1.changeName("Steve") << endl;
  cout << student1.greet();
  return 0;
}
