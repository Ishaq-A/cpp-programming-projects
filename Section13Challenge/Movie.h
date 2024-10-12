#ifndef _MOVIE_H_
#define _MOVIE_H_
#include <string>

class Movie {
private:
    std::string movie_name;
    std::string movie_rating;
    int watch_count;
public:
    // Constructor
    Movie(std::string movie_name, std::string movie_rating, int watch_count);

    // Copy Constructor
    Movie(const Movie &source);

    // Destructor
    ~Movie();

    // Getters & Setters
    std::string get_movie_name() const {return movie_name;}
    std::string get_movie_rating() const {return movie_rating;}
    int get_watch_count() const {return watch_count;}

    void set_movie_name(std::string movie_name) {this -> movie_name = movie_name;}
    void set_movie_rating(std::string movie_rating) {this -> movie_rating = movie_rating;}
    void set_watch_count(int watch_count) {this -> watch_count = watch_count;}

    // Methods:
    void increment_watched() {++watch_count;}
    void display() const;
};

#endif

