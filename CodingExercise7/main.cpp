#include <iostream>

using namespace std;

int main()
{
    int num1 {13};
    int num2 {0};
    cout << num1 << " " << num2 << endl;

    num1 = 5;
    cout << num1 << endl;

    num2 = num1;
    cout << num2 << endl;
    
    cout << endl;
    return 0;
}

