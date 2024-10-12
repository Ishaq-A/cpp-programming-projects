#include <iostream>
#include <string>

using namespace std;

class Shallow {
private:
    int *data; // POINTER
public:
    Shallow(int d); // Constructor
    Shallow(const Shallow &source); // Copy Constructor
    ~Shallow(); // Destructor

    // Setter & Getter
    void set_data_value(int d) {*data = d;}
    int get_data_value() {return *data;}
};

Shallow::Shallow(int d) {
    data = new int; // Allocate Storage
    *data = d;
}

Shallow::~Shallow() {
    delete data; // Free Storage
    cout << "Destructor freeing data" << endl;
}

Shallow::Shallow(const Shallow &source)
    : data {source.data} {
        cout << "Copy Constructor - Shallow" << endl;
}

void display_shallow(Shallow s) {
    cout << s.get_data_value() << endl;
}

int main() {

    Shallow obj1 {100};
    display_shallow(obj1);

    Shallow obj2 {obj1};
    obj2.set_data_value(1000);
    
    cout << endl;
    return 0;
}

