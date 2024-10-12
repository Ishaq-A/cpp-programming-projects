#include <iostream>
#include <string>

using namespace std;

class Dog {
public:
    string name;
    int age;    
};

int main() {
    Dog spot;

    spot.name = "Spot";
    spot.age = 5;

    cout << endl;
    return 0;
}

