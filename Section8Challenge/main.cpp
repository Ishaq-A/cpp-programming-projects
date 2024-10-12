/*
    For this program I will be using US dollars and cents.

    Write a program that asks the user to enter the following:
    An integer representing the number of cents

    You may assume that the number of cents entered is
    greater than, or equal to zero.

    The program should then display how to provide that
    change to the user.

    In the US:
        1 Dollar = 100 cents.
        1 Quarter = 25 cents.
        1 Dime = 10 cents.
        1 Nickel = 5 cents.
        1 Penny = 1 cent.    
*/

#include <iostream>

using namespace std;

int main()
{
    // Define conversion values in cents
    const int dollar_value {100};
    const int quarter_value {25};
    const int dime_value {10};
    const int nickel_value {5};
    
    int num_cents {0};

    // Solution 1 - Not using modulo operator:

    cout << "Enter an amount in cents: ";
    cin >> num_cents;

    int balance {}, dollars {}, quarters {}, dimes {}, nickels {}, pennies {};

    dollars = num_cents / dollar_value;
    balance = num_cents - (dollars * dollar_value);

    quarters = balance / quarter_value;
    balance -= quarters * quarter_value;

    dimes = balance / dime_value;
    balance -= dimes * dime_value;

    nickels = balance / nickel_value;
    balance -= nickels * nickel_value;

    pennies = balance;

    cout << "Dollars: " << dollars << endl;
    cout << "Quarters: " << quarters << endl;
    cout << "Dimes: " << dimes << endl;
    cout << "Nickels: " << nickels << endl;
    cout << "Pennies: " << pennies << endl;

    // Solution 2 - Using modulo operator:

    // Reset everything to zero.
    balance = dollars = quarters = dimes = nickels = pennies = 0;

    dollars = num_cents / dollar_value;
    balance = num_cents % dollar_value;

    quarters = balance / quarter_value;
    balance %= quarter_value;

    dimes = balance / dime_value;
    balance %= dime_value;

    nickels = balance / nickel_value;
    balance %= nickel_value;

    pennies = balance;

    cout << "\nDollars: " << dollars << endl;
    cout << "Quarters: " << quarters << endl;
    cout << "Dimes: " << dimes << endl;
    cout << "Nickels: " << nickels << endl;
    cout << "Pennies: " << pennies << endl;


    cout << endl;
    return 0;
}

