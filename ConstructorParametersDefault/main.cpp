#include <iostream>
#include <string>

using namespace std;

class Player {
private:
    std::string name;
    int health;
    int xp;
public:
    // Constructor with default parameter values
    Player(std::string name_val = "None", int health_val = 0, int xp_val = 0);    
};

Player::Player(std::string name_val, int health_val, int xp_val)
    : name {name_val}, health {health_val}, xp {xp_val} {

    }

int main() {
    Player empty; // None, 0, 0
    Player frank {"Frank"}; // Frank, 0, 0
    Player villain {"Villain", 100, 55}; // Villain, 100, 55
    Player hero {"Hero", 100}; // Hero, 100, 0

    // Note what happens if you declare a no-args constructor

    cout << endl;
    return 0;
}

