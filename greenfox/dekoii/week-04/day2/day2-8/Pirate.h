/*
 * Pirate.h
 *
 *  Created on: Nov 8, 2016
 *      Author: dekoii
 */
#include <iostream>


using namespace std;


#ifndef PIRATE_H_
#define PIRATE_H_

class Pirate {
private:
  int rumcount;
  string name;

public:
	Pirate(string name, int rumcount = 0) {
	this->rumcount = rumcount;
	this->name = name;
	}

	int drink_rum();
	string hows_goin_mate();
};

#endif /* PIRATE_H_ */
