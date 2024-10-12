#ifndef _PLAYER_H_
#define _PLAYER_H_
#include <string>

class Player {
private:
    static int num_players;
    std::string name;
    int health;
    int xp;
public:
    // Getters
    std::string get_name() {return name;}
    int get_health() {return health;}
    int get_xp() {return xp;}

    // Constructors
    Player(std::string name_val = "None", int health_val = 0, int xp_val = 0);
    Player(const Player &source); // Copy Constructor
    ~Player(); // Destructor

    // Static Class Function
    static int get_num_players();
};

#endif // _PLAYER_H_

