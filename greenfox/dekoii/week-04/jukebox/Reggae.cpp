/*
 * Reggae.cpp
 *
 *  Created on: Nov 13, 2016
 *      Author: dekoii
 */

#include "Reggae.hpp"

void Reggae::rateTheSong(int rating) {
  if (rating > 0 && rating < 5) {
    Song::rateTheSong(rating);
  }
}

Reggae::Reggae(std::string artist, std::string title) {
  this->genre = "Reggae";
}



