/*
 * Rock.cpp
 *
 *  Created on: Nov 13, 2016
 *      Author: dekoii
 */

#include "Rock.hpp"

void Rock::rateTheSong(int rating) {
  if (rating > 1 && rating < 6) {
    Song::rateTheSong(rating);
  }
}

Rock::Rock(std::string artist, std::string title) {
  this->genre = "Rock";

}
