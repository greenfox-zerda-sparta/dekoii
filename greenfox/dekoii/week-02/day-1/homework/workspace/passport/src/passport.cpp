/*
 * passport.cpp
 *
 *  Created on: Oct 23, 2016
 *      Author: dekoii
 */

#include <iostream>

using namespace std;

int main()
{
	//this comment is in one line therefore called one line comment
	/* if u use multiple lines that
	 * is the way but u have to remember that
	 * no nesting is possible
	 */
	 int age;
	  float hight;
	  char sex;
	  bool IDnumber=true;

  cout << "Enter ur passport data" << endl;
  cout << "Age?" << endl;
  cin >> age;
  cout << "Height?" << endl;
  cin >> hight;
  cout << "Sex? M or F?" << endl;
  cin >> sex;
  cout << "ID number?" << endl;
  cin >> IDnumber;

  cout << "passport data printed out by cout" << endl;
  cout << "age" << age << endl;
  cout << "height" << hight << "cm" << endl;
  cout << "sex m or f" << endl;
  cout << sex << endl;
  cout << "ID number checked if 1" <<endl;
  cout << IDnumber << endl;

  cout << "Your height " << hight << " minus your age " << age << " equals to: " << hight + age << endl;
  cout << "It is possible to substract and multiply and divide" << endl;
  cout << "Here is the result using the -" << endl;
  cout << hight - age<< endl;
  cout << "Here with *" << endl;
  cout << hight * age << endl;
  cout << "And last but not least the /" << endl;
  cout << hight / age << endl;


  return 0;

}


