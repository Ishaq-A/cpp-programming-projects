#include <iostream>
#include <string>

using namespace std;

class Account {
private:
    double balance;

public:
    void set_balance(double bal);
    double get_balance();
};


void Account::set_balance(double bal) {
    balance = bal;
}

double Account::get_balance() {
    return balance;
}

int main() {
    
    cout << endl;
    return 0;
}

