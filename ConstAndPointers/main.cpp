#include <iostream>

using namespace std;

int main()
{
    int high_score {100};
    int low_score {65};
    const int *const score_ptr {&high_score};

    // *score_ptr = 86; // ERROR
    // score_ptr = &low_score; // ERROR
    
    cout << endl;
    return 0;
}

