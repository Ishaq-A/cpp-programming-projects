#include <iostream>

using namespace std;

class Base {
private:
    int value;
public:
    Base()
        : value {0} {
            cout << "Base no-args constructor" << endl;
    }

    Base(int x)
        : value {x} {
            cout << "Base (int) overloaded constructor" << endl;
    }

    ~Base() {
        cout << "Base destructor" << endl;
    }
};

class Derived : public Base {
    using Base::Base;

private:
    int doubled_valued;
public:
    Derived()
        : doubled_valued {0} {
            cout << "Derived no-args constructor" << endl;
    }

    // Derived(int x)
    //     : doubled_valued {x * 2} {
    //         cout << "Derived (int) overloaded constructor" << endl;
    // }

    ~Derived() {
        cout << "Derived destructor" << endl;
    }
};

int main() {
    // Base a;
    // Base b {100};

    Derived c;
    Derived d {100};
    
    cout << endl;
    return 0;
}

