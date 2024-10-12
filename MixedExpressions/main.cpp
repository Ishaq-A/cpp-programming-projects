/*
    Ask the user to enter 3 integers
    Calculate the sum of the integers
    Then calculate the average of the 3 integers.

    Display the 3 integers entered,
    the sum of the 3 integers, and
    the average of the 3 integers
*/

#include <iostream>

using namespace std;

int main()
{
    int num1 {}, num2 {}, num3 {};
    const int count {3};

    cout << "Enter 3 integers separated by spaces: ";
    cin >> num1 >> num2 >> num3;

    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;
    cout << "num3 = " << num3 << endl;

    int sum = num1 + num2 + num3;
    cout << "Sum = " << sum << endl;

    double average {0.0};

    average = static_cast<double> (sum) / count; // New cast syntax.
    
//    average = (double) sum / count; // Old cast syntax.

    cout << "Average = " << average << endl;
    
    cout << endl;
    return 0;
}

