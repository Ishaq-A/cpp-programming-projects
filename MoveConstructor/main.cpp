#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Move {
private:
    int *data; // Raw Pointer
public:
    // Setter & Getter
    void set_data_value(int d) {*data = d;}
    int get_data_value() {return *data;}

    //Constructors
    Move(int d); // Constructor
    Move(const Move &source); // Copy Constructor
    Move(Move &&source); // Move Constructor
    ~Move(); // Destructor
};

Move::Move(const Move &source) {
    data = new int;
    *data = *source.data;
}

Move::Move(Move &&source)
    : data {source.data} {
        source.data = nullptr;
}

int main() {
    vector<Move> vec;

    vec.push_back(Move {10});
    vec.push_back(Move {20});
    
    
    cout << endl;
    return 0;
}

