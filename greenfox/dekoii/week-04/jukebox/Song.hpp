#ifndef SONG_HPP
#define SONG_HPP

#include <string>

class Song {

private:
  int ratingNumberCounter;
  float avgRating;
  //float * avg;


protected:
  std::string artist;
  std::string title;
  std::string genre;
  int rating;
  //virtual void rateTheSong(int rating);

public:
  virtual void rateTheSong(int rating);
  Song();
  float setAvgRateOfSongs();
  float *getAvgRateOfSongs();
  virtual ~Song();
};

#endif
