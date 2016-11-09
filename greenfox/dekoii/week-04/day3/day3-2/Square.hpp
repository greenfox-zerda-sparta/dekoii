/*
 * Square.hpp
 *
 *  Created on: Nov 9, 2016
 *      Author: dekoii
 */
#include <iostream>
#include <string>

#include "Shape.hpp"

using namespace std;

#ifndef SQUARE_HPP_
#define SQUARE_HPP_

class Square : public Shape {
public:
	string* getName();

	~Square () {}
};

#endif /* SQUARE_HPP_ */
