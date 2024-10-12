#include <iostream>

using namespace std;

void func_a();
void func_b();
void func_c();

void func_a() {
    std::cout << "Staring func_a()" << std::endl;
    func_b();
    std::cout << "Ending func_a()" << std::endl;
}

void func_b() {
    std::cout << "Staring func_b()" << std::endl;
    func_c();
    std::cout << "Ending func_b()" << std::endl;
}

void func_c() {
    std::cout << "Staring func_c()" << std::endl;
    throw 100;
    std::cout << "Ending func_c()" << std::endl;
}

int main() {
    cout << "Starting main()" << endl;

    try {
        func_a();
    } catch(int &ex) {
        cout << "Caught error in main" << endl;
    }
    
    cout << "Finishing main()" << endl;
    
    cout << endl;
    return 0;
}

