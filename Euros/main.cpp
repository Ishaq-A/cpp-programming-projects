#include <iostream>

using namespace std;

int main()
{
    const double usd_per_eur {1.19};

    cout << "Welcome to the EUR to USD converter" << endl;
    cout << "Enter the value in EUR: ";

    double euros {0.0};
    double dollars {0.0};

    cin >> euros;

    dollars = euros * usd_per_eur;

    cout << euros << " Euros = " << dollars << " Dollars" << endl;
    
    cout << endl;
    return 0;
}

