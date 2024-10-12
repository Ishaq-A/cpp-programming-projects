#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int age {};
    bool has_car {};
    const int legal_age {16};

    cout << "Enter your age, and whether you have a car: ";
    cin >> age >> has_car;

    if(age >= legal_age) {
        if(has_car == true) {
            cout << "Yes - you can drive!" << endl;
        } else {
            cout << "Sorry, you need to buy a car before you can drive!" << endl;
        }
    } else {
        int diff = legal_age - age;
        cout << "Sorry, come back in " << diff << " years and be sure you own a car when you come back." << endl;
    }

    cout << endl;
    return 0;
}

