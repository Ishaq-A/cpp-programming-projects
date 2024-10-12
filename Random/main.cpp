#include <iostream>
#include <string>
#include <cstdlib> // Required for rand()
#include <ctime> // Required for time()

using namespace std;

int main()
{
    int random_number {};
    size_t count {10}; // Number of random numbers to generate
    int min {1}; // Lower bound (inclusive)
    int max {6}; // Upper bound (inclusive)

    // Seed the random number generator
    // If you don't seed the generator you will get the same
    // sequence of random numbers every run

    cout << "RAND_MAX on my system is: " << RAND_MAX << endl;
    srand(time(nullptr)); // This seeds the random number generator

    for(size_t i {1}; i <= count; ++i) {
        //Generate a random number [min, max]
        random_number = rand() % max + min;
        cout << random_number << endl;
    }
    
    cout << endl;
    return 0;
}

