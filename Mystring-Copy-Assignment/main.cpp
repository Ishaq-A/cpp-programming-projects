#include <iostream>
#include "Mystring.h"

using namespace std;

int main() {
    Mystring a {"Hello"}; // Overloaded Constructor
    Mystring b; // No-args Constructor
    b = a; // Copy Assiggnment
           // b.operator=(a)
    b = "This is a test"; // b.operator=("This is a test");       

    cout << endl;
    return 0;
}

