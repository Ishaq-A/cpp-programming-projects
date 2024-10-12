#include <iostream>
#include "Mystring.h"

using namespace std;

int main() {
    Mystring a {"Hello"}; // Overloaded Constructor
    a = Mystring {"Hola"}; // Overloaded Construuctor, then move assignment
    a = "Bonjour"; // Overloaded Construuctor, then move assignment

    cout << endl;
    return 0;
}

