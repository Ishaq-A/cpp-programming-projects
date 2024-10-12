#include <iostream>

using namespace std;

int main()
{
    int age {};
    bool parental_consent {}, ssn {}, accidents {};

    // Test

    age = 18;
    ssn = true;
    accidents = false;
    

    if (((age >= 18) || (age > 15 && parental_consent == true)) && ssn == true && accidents == false) {
        cout << "Yes, you can work." << endl;
    }

    cout << endl;
    return 0;
}

