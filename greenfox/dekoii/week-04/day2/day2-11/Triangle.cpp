/*
 * Triangle.cpp
 *
 *  Created on: Nov 8, 2016
 *      Author: dekoii
 */
#include <iostream>
#include "Triangle.h"

using namespace std;

void Triangle::printTriangle(int numberOfLines) {
  char star = '*';
  for (int index = 0; index <= numberOfLines; index++){
    int i = 0;
    while (i < index){
      cout << star;
      i++;
    }
    cout << endl;
  }
}

Triangle::Triangle(int userInput) {
    this->numberOfLines = userInput;
    printTriangle (userInput);
}

void Diamond::printDiamond(int numberOfLines) {
int num = numberOfLines;
for (int i = 0; i < num; i++){
    for (int j = 0; j < num -i ; j++){
      cout << '.' ;
    }
    for (int k = 0; k < i * 2 + 1; k++){
      cout << '*';
    }
    cout << endl;
  }
  if (num % 2 == 1){
      num = (num + 1);
    }
  for (int i = 0; i < num + 1; i++){
    for (int L = 0; L <= i; L++){
      cout << '.';
    }

    for (int m = 0 ; m <= num - i * 2 + 1; m++){
      cout << '*';
    }
    cout << endl;
  }
}


Diamond::Diamond(int userInput) {
  this->numberOfLines = userInput;
  printDiamond (userInput);
}


void XmasTree::printXmasTree(int numberOfLines) {
int num = numberOfLines;
  for (int i = 0; i < num; i++){
    for (int j = 0; j < num-i-1; j++){
      cout << ' ' ;
    }
    for (int k = 0; k < i * 2 + 1 ; k++){
      cout << '*';
    }
    cout << endl;
  }
}

XmasTree::XmasTree(int userInput) {
  this->numberOfLines = userInput;
  printXmasTree (userInput);
};
