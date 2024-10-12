#include <iostream>

using namespace std;

int main()
{
    int age {};

    cout << "Enter your age: ";
    cin >> age;

    if(age >= 16) {
        cout << "Yes - you can drive!" << endl;
    }
    
    cout << endl;
    return 0;
}

