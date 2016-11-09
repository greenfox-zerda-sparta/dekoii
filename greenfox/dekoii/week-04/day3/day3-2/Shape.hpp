/*
 * Shape.hpp
 *
 *  Created on: Nov 9, 2016
 *      Author: dekoii
 */
#include <iostream>
#include <string>

using namespace std;

#ifndef SHAPE_HPP_
#define SHAPE_HPP_

class Shape {

	public:
		virtual string* getName();
	virtual ~Shape (){}
};

#endif /* SHAPE_HPP_ */
