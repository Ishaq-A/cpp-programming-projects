#include <iostream>
#include <string>

using namespace std;

class Player {
private:
    std::string name;
    int health;
    int xp;
public:
    void set_name(std::string name_val) {
        name = name_val;
    }

    // Overloaded Constructors:
    Player() {
        cout << "No args constructor called" << endl;
    }

    Player(std::string name) {
        cout << "String arg constructor called" << endl;
    }

    Player(std::string name, int health, int xp) {
        cout << "Three args constructor called" << endl;
    }

    // Destructor
    ~Player() {
        cout << "Destructor called for " << name << endl;
    }
};

class Account {
private:
    std::string name;
    double balance;
public:
    // Constructors:
    Account();
    Account(std::string name, double balance);
    Account(std::string name);
    Account(double balance);

    // Destructor:
    ~Account(); 
};

int main() {

    {
        Player slayer;
        slayer.set_name("Slayer");
    }

    {
        Player frank;
        frank.set_name("Frank");
        Player hero("Hero");
        hero.set_name("Hero Laal");
        Player villain("Villain", 100, 12);
        villain.set_name("Villain Laal");
    }

    Player *enemy = new Player;
    enemy -> set_name("Enemy");

    Player *level_boss = new Player("Level Boss", 1000, 300);
    level_boss -> set_name("Level Boss Laal");

    delete enemy;
    delete level_boss;
    
    std::cout << std::endl;
    return 0;
}

