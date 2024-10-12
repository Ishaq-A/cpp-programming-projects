#include <iostream>
#include <memory>

using namespace std;

class B; // Forward Declaration

class A {

    std::shared_ptr<B> b_ptr;

public:
    void set_B(std::shared_ptr<B> &b) {
        b_ptr = b;
    }

    A() {
        std::cout << "A Constructor" << std::endl;
    }

    ~A() {
        std::cout << "A Destructor" << std::endl;
    }
};

class B {

    std::weak_ptr<A> a_ptr; // Make weak to break strong circular reference

public:
    void set_A(std::shared_ptr<A> &a) {
        a_ptr = a;
    }

    B() {
        std::cout << "B Constructor" << std::endl;
    }

    ~B() {
        std::cout << "B Destructor" << std::endl;
    }
};

int main() {
    shared_ptr<A> a = make_shared<A>();
    shared_ptr<B> b = make_shared<B>();
    a -> set_B(b);
    b -> set_A(a);
    
    cout << endl;
    return 0;
}

