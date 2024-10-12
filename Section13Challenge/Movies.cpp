#include <iostream>
#include "Movies.h"

Movies::Movies() {
    // Nop-args constructor
}

Movies::~Movies() {
    // Destructor
}

bool Movies::add_movie(std::string movie_name, std::string movie_rating, int watch_count) {
    for(const Movie &movie : movies) {
        if(movie.get_movie_name() == movie_name) {
            return false;
        }
    }

    Movie temp {movie_name, movie_rating, watch_count};
    movies.push_back(temp);

    return true;
}

bool Movies::increment_watched(std::string name) {
    for(Movie &movie : movies) {
        if(movie.get_movie_name() == name) {
            movie.increment_watched();
            return true;
        }
    }

    return false;
}

void Movies::display() const {
    if(movies.size() == 0) {
        std::cout << "Sorry, no movies to display" << std::endl;
    } else {
        std::cout << "=======================================" << std::endl;
        for(const auto &movie : movies) {
            movie.display();
        }
        std::cout << "=======================================" << std::endl;

    }
}

