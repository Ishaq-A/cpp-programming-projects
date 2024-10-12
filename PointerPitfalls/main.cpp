#include <iostream>

using namespace std;

int main()
{
    int *int_ptr; // Pointing anywhere

    *int_ptr = 100; // Hopefully a crash
    
    cout << endl;
    return 0;
}

