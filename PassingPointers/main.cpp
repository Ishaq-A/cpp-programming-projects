#include <iostream>

using namespace std;

void double_data(int *int_ptr);

void double_data(int *int_ptr)
{
    *int_ptr *= 2;

    // *int_ptr = *int_ptr * 2;
}

int main()
{
    int value {10};
    int *int_ptr {nullptr};

    // Calling the function using address of a value
    cout << "Value: " << value << endl;
    double_data(&value);
    cout << "Value: " << value << endl;

    cout << "-----------------------------" << endl;
    // Calling the function using a pointer
    int_ptr = &value;
    double_data(int_ptr);
    cout << "Value: " << value << endl;

    cout << endl;
    return 0;
}

