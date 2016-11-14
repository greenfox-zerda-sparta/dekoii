
#include "Song.hpp"

Song::Song(){
  this->rating = 0;
  this->ratingNumberCounter = 0;
  this->genre = "Techno Viking";
  this->artist = "bla";
  this->title = "foo";

}

void Song::rateTheSong(int rating) {
  if (rating > 0 && rating < 6) {
    this->ratingNumberCounter++;
    this->rating += rating;
  }
}

float Song::setAvgRateOfSongs() {
  if (ratingNumberCounter != 0) {
    avgRating = float (rating) / float (ratingNumberCounter);
    return avgRating ;
  }else {
    return 0.0;
  }
}

Song::~Song() {

}

