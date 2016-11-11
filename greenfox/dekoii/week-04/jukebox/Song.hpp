#ifndef SONG_HPP
#define SONG_HPP

#include <string>

class Song {

private:
  std::string artist;
  std::string title;
  int ratingNumberCounter;

protected:
  int rating;
  float avgRating;

public:
  Song(std::string artist,std::string title);
  int rateTheSong(int rating);
  float getAvgRateOfSong();
};

#endif
