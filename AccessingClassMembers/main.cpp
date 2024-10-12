#include <iostream>
#include <string>

using namespace std;

class Player {
public:    
    // Attributes:
    string name;
    int health;
    int xp;

    // Methods:
    void talk(string text_to_say) {
        cout << name << " says " << text_to_say << endl;
    }

    bool is_dead();
};

class Account {
public:    
    // Attributes:
    string name;
    double balance;

    // Methods:
    bool deposit(double bal) {
        balance += bal;
        cout << "in deposit" << endl;
    }

    bool withdraw(double bal) {
        balance -= bal;
        cout << "in withdraw" << endl;
    }
};

int main() {
    Account frank_account;

    frank_account.name = "Frank's accout";
    frank_account.balance = 5000.00;

    frank_account.deposit(1000.00);
    frank_account.withdraw(500.00);

    Account *jim_account = new Account;

    (*jim_account).name = "Jim's account";
    jim_account -> balance = 2500.00;

    (*jim_account).deposit(1000.00);
    jim_account -> withdraw(300.00);

    Player frank;
    frank.name = "Frank";
    frank.health = 100;
    frank.xp = 12;

    frank.talk("Hi there");

    // Pointer to a player object
    Player *enemy = new Player;

    // Explicit pointer dereferencing
    (*enemy).name = "Enemy";
    (*enemy).health = 100;

    // Accessing class members using the arrow operator
    enemy -> xp = 15;
    enemy -> talk("I will destroy you!");

    cout << endl;
    return 0;
}

