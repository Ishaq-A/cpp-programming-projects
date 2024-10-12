#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> vec {10,20,30,40,50};

    cout << "Original Vector:" << endl;
    cout << vec.at(0) << endl;
    cout << vec.at(1) << endl;
    cout << vec.at(2) << endl;
    cout << vec.at(3) << endl;
    cout << vec.at(4) << endl;

    vec.at(0) = 100;
    vec.at(4) = 1000;

    cout << "Edited Vector:" << endl;
    cout << vec.at(0) << endl;
    cout << vec.at(1) << endl;
    cout << vec.at(2) << endl;
    cout << vec.at(3) << endl;
    cout << vec.at(4) << endl;

    return 0;
}

