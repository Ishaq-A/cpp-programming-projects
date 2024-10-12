#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int favourite_number;

    cout << "Enter your favourite number between 1 and 100: ";
    cin >> favourite_number;
    cout << "Amazing!! That's my favourite number too!" << endl;
    cout << "No really!! " << favourite_number << " is my favourite number!" << endl;
    return 0;
}

