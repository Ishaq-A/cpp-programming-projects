#include <iostream>

using namespace std;

int main()
{
    int day_code{};

    cout << "Enter a number from 0-6: ";
    cin >> day_code;

    switch(day_code) {
        case 0:
            cout << "Sunday" << endl;
            break;
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;

        case 6:
            cout << "Saturday" << endl;
            break;
        default:
            cout << "Error - illegal day code" << endl;                 
    }

    cout << endl;
    return 0;
}

