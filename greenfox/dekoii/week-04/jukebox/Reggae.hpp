/*
 * Reggae.hpp
 *
 *  Created on: Nov 13, 2016
 *      Author: dekoii
 */
#include "Song.hpp"

#ifndef REGGAE_HPP_
#define REGGAE_HPP_

class Reggae : public Song{

public:
  void rateTheSong(int rating);
  Reggae(std::string artist, std::string title);

};

#endif /* REGGAE_HPP_ */
