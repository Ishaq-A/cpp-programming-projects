#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    double high_temp {100.7};
    double low_temp {37.2};

    double *temp_ptr;

    temp_ptr = &high_temp; // Points to high_temp
    temp_ptr = &low_temp; // Now points to low_temp

    temp_ptr = nullptr;

    cout << endl;
    return 0;
}

