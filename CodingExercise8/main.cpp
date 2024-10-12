#include <iostream>

using namespace std;

int main()
{
    int number {3};
    int original_number {number};

    cout << "Original number is " << original_number << endl;
    
    number = number * 2;
    cout << number << endl;

    number = number + 9;
    cout << number << endl;

    number = number - 3;
    cout << number << endl;

    number = number / 2;
    cout << number << endl;

    number = number - original_number;
    cout << number << endl;

    number = number + 9;
    cout << number << endl;

    number = number % 3;
    cout << number << endl;

    cout << endl;
    return 0;
}

