
#include "Song.hpp"

Song::Song(std::string artist, std::string title){
  this->artist = artist;
  this->title = title;
  this->rating = 0;
  this->avgRating = 0.0;
  this->ratingNumberCounter = 0;
}

int Song::rateTheSong(int rating) {
  this->ratingNumberCounter++;
  return this->rating += rating;
}

float Song::getAvgRateOfSong() {
  if (ratingNumberCounter != 0) {
    return avgRating = float (rating) / float (ratingNumberCounter);
  }else {
    return 0.0;
  }
}

