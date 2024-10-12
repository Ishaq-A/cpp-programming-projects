#include <iostream>

using namespace std;

int main()
{
    // Pointer created which points to integer data.
    int *int_ptr {nullptr};

    // Memory allocated to pointer on the heap.
    int_ptr = new int;

    cout << int_ptr << endl; // Displays memory address.

    delete int_ptr;

    size_t size {0};
    double *temp_ptr {nullptr};

    cout << "How many temps? ";
    cin >> size;

    temp_ptr = new double[size];

    cout << temp_ptr << endl;

    delete [] temp_ptr;
    
    cout << endl;
    return 0;
}

