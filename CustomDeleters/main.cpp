#include <iostream>
#include <memory>

using namespace std;

class Test {
private:
    int data;
public:
    Test()
        : data {0} {
            std::cout << "\tTest Constructor (" << data << ")" << std::endl;
    }

    Test(int data)
        : data {data} {
            std::cout << "\tTest Constructor (" << data << ")" << std::endl;
    }

    ~Test() {
        std::cout << "\tTest Destructor (" << data << ")" << std::endl;
    }
};

void my_deleter(Test *ptr) {
    std::cout << "\tUsing my custom function deleter" << std::endl;
    delete ptr;
}

int main() {

    {
        // Using a function
        std::shared_ptr<Test> ptr1 {new Test {100}, my_deleter};
    }

    cout << "=====================================================" << endl;

    {
        // Using a lambda expression
        std::shared_ptr<Test> ptr2 (new Test {100}, [] (Test *ptr) {
            cout << "\tUsing my custom lambda deleter" << endl;
            delete ptr;
        });
    }
    
    cout << endl;
    return 0;
}

