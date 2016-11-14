/*
 * Rock.hpp
 *
 *  Created on: Nov 13, 2016
 *      Author: dekoii
 */

#include "Song.hpp"

#ifndef ROCK_HPP_
#define ROCK_HPP_

class Rock : public Song{

public:
  void rateTheSong(int rating);
  Rock(std::string artist, std::string title);
};

#endif /* ROCK_HPP_ */
