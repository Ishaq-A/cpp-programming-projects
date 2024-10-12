#ifndef _MOVIES_H_
#define _MOVIES_H_
#include <vector>
#include <string>
#include "Movie.h"

class Movies {
private:
    std::vector<Movie> movies;
public:
    Movies(); // Constructor
    ~Movies(); // Destructor

    // Methods:
    bool add_movie(std::string movie_name, std::string movie_rating, int watch_count);
    bool increment_watched(std::string movie_name);
    void display() const;
};

#endif

