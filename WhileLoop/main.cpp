#include <iostream>

using namespace std;

int main()
{
    // int num{};

    // cout << "Enter a positive integer to count up to: ";
    // cin >> num;

    // int i{1};
    // while(num >= i) {
    //     cout << i << endl;
    //     i++;
    // }

    int number{};

    cout << "Enter an integer less than 100: ";
    cin >> number;

    while(number >= 100) {
        cout << "Enter an integer less than 100: ";
        cin >> number;
    }

    cout << endl;
    return 0;
}

