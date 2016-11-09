/*
 * Triangle.h
 *
 *  Created on: Nov 8, 2016
 *      Author: dekoii
 */
#include <iostream>
#include <string>

using namespace std;


#ifndef TRIANGLE_H_
#define TRIANGLE_H_

class Triangle {

private:
  int numberOfLines;

public:
  void printTriangle(int numberOfLines);
  Triangle(int userInput);
};

class Diamond {

private:
  int numberOfLines;

public:
  void printDiamond(int numberOfLines);
  Diamond(int userinput);
};

class XmasTree {

private:
  int numberOfLines;

public:
  void printXmasTree(int numberOfLines);
  XmasTree(int userinput);
};

#endif /* TRIANGLE_H_ */
