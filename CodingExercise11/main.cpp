#include <iostream>

using namespace std;

int main()
{
    int age {};
    const int min {16};

    cout << "Enter your age: ";
    cin >> age;

    if(age >= min) {
        cout << "Yes - you can drive!" << endl;
    } else {
        int diff {min - age};
        cout << "Sorry, come back in " << diff << " years" << endl;
    }
    
    cout << endl;
    return 0;
}

