#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    // int num {100};
    // int &ref {num};

    // cout << num << endl;
    // cout << ref << endl;

    // num = 200;
    // cout << "\n------------------------" << endl;
    // cout << num << endl;
    // cout << ref << endl;

    // ref = 300;
    // cout << "\n------------------------" << endl;
    // cout << num << endl;
    // cout << ref << endl;

    cout << "\n------------------------" << endl;
    vector<string> stooges {"Larry", "Moe", "Curly"};

    for(auto str : stooges) {
        str = "Funny";
        // str is a COPY of each vector element
    }

    for(auto str : stooges) {
        cout << str << endl; // No change
    }

    cout << "\n------------------------" << endl;
    for(auto &str : stooges) {
        str = "Funny";
        // str is a REFERENCE to each vector element
    }

    for(auto const &str : stooges) { // Notice we are using const
        cout << str << endl; // Now the vector elements have changed
    }
    
    cout << endl;
    return 0;
}

