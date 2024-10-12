#include <iostream>
#include <string>

using namespace std;

class Player {
private:
    std::string name;
    int health;
    int xp;
public:
    // Overloaded Constructors
    Player();
    Player(std::string name_val);
    Player(std::string name_val, int health_val, int xp_val);
};

Player::Player() {
    name = "None";
    health = 0;
    xp = 0;
}

Player::Player(std::string name_val) {
    name = name_val;
    health = 0;
    xp = 0;
}

Player::Player(std::string name_val, int health_val, int xp_val) {
    name = name_val;
    health = health_val;
    xp = xp_val;
}

int main() {
    
    Player empty; // None, 0, 0

    Player hero {"Hero"}; // Hero, 0, 0
    Player villlain {"Villain"}; // Villain, 0, 0
    
    Player frank {"Frank", 100, 4}; // Frank, 100, 4

    Player *enemy = new Player("Enemy", 1000, 0); // Enemy, 1000, 0
    delete enemy;
    
    cout << endl;
    return 0;
}

