#include <iostream>
#include <string>
#include <vector>

using namespace std;

void display(const vector<string> *const v)
{
    // (*v).a(0) = "Funny"; COMPILER ERROR

    for(auto str : *v) {
        cout << str << " ";
    }
    cout << endl;

    // v = nullptr; COMPILER ERROR
}

void display(int *array, int sentinel)
{
    while(*array != sentinel) {
        cout << *array++ << " ";
    }
    cout << endl;
}

int main()
{
    // cout << "--------------------------" << endl;
    // vector<string> stooges {"Larry", "Moe", "Curly"};
    // display(&stooges);

    cout << "--------------------------" << endl;
    int scores[] {100,98,97,79,85,-1};
    display(scores, -1);

    cout << endl;
    return 0;
}

