#include <iostream>
#include <string>

using namespace std;

class Student {
  public:
    string name;
    unsigned int age;
    Student(string name, unsigned int age) {
      this->age = age;
      this->name = name;
    }
    string greet(string name){
      string greeting = " Hello my name is: ";
      return greeting + this->name;
      }
    
};

int main() {
  // Create a method on the Student class called "greet" that returns a string
  Student student1 ("John", 21);
  // like: "Hello my name is: <student name>"
  cout << student1.greet (student1.name);
  
  return 0;
}
