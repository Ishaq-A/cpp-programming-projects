#include <iostream>
#include <string>

using namespace std;

class Deep {
private:
    int *data; // POINTER
public:
    Deep(int d); // Constructor
    Deep(const Deep &source); // Copy Constructor
    ~Deep(); // Destructor

    // Setter & Getter
    void set_data_value(int d) {*data = d;}
    int get_data_value() {return *data;}

    //Method
    void display_deep(Deep s);
};

Deep::Deep(int d) {
    data = new int; // Allocate Storage
    *data = d;
}

Deep::~Deep() {
    delete data; // Free Storage
    cout << "Destructor freeing data" << endl;
}

// Deep::Deep(const Deep &source) {
//     data = new int; // Allocate Storage
//     *data = *source.data;
//     cout << "Copy Constructor - Deep" << endl;
// }

Deep::Deep(const Deep &source)
    : Deep {*source.data} {
        cout << "Copy Constructor - Deep" << endl;
}

void diaplay_deep(Deep s) {
    cout << s.get_data_value() << endl;
}

int main() {
    Deep obj1 {100};
    diaplay_deep(obj1);

    Deep obj2 {obj1};
    obj2.set_data_value(1000);
    
    cout << endl;
    return 0;
}

