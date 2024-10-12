#include <iostream>

using namespace std;

unsigned long long fibonacci(unsigned long long n)
{
    if(n <= 1) {
        return n; // Base case
    }

    return fibonacci(n - 1) + fibonacci(n - 2); // Recursive case
}

int main()
{
    cout << fibonacci(30) << endl; // 832040
    
    cout << endl;
    return 0;
}

