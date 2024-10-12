#include <iostream>
#include "Movie.h"

Movie::Movie(std::string movie_name, std::string movie_rating, int watch_count)
    : movie_name {movie_name}, movie_rating {movie_rating}, 
      watch_count {watch_count} {

}

Movie::Movie(const Movie &source)
    : Movie {source.movie_name, source.movie_rating, source.watch_count} {

}

Movie::~Movie() {

}

void Movie::display() const {
    std::cout << movie_name << ", " << movie_rating
              << ", " << watch_count << std::endl;
}

