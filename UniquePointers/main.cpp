#include <iostream>
#include <memory>
#include <vector>
#include "Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"
#include "Savings_Account.h"

using namespace std;

class Test {
private:
    int data;
public:
    Test()
        : data {0} {
            std::cout << "Test constructor (" << data << ")" << std::endl;
    }

    Test(int data)
        : data {data} {
            std::cout << "Test constructor (" << data << ")" << std::endl;
    }

    int get_data() const {
        return data;
    }

    ~Test() {
        std::cout << "Test destructor (" << data << ")" << std::endl;
    }
};

int main() {
//    Test *t1 = new Test(1000);

    // Created a Unique Pointer to a Test Object
    // Object is initialised
//    std::unique_ptr<Test> t1 {new Test{100}};

    // Unique pointer to a Test object
    // Calling make_unique<T>() function to initialise object
//    std::unique_ptr<Test> t2 = std::make_unique<Test>(1000);

    // Unique pointer initialised to nullptr
//    std::unique_ptr<Test> t3;

    // move() function moves ownership of
    // Test object on the heap from t1 to t3
    // Now only t3 will be refrring to it
    // and t1 will have a nullptr in it
//    t3 = std::move(t1);

    // std::unique_ptr<Account> a1 = std::make_unique<Checking_Account>("Moe", 50000);
    // std::cout << *a1 << endl;
    // a1 -> deposit(50000);
    // cout << *a1 << endl;

    std::vector<std::unique_ptr<Account>> accounts;

    accounts.push_back(make_unique<Checking_Account>("James", 10000));
    accounts.push_back(make_unique<Savings_Account>("Billy", 4000, 5.2));
    accounts.push_back(make_unique<Trust_Account>("Bobby", 5000, 4.5));

    for(const auto &acc : accounts) {
        cout << *acc << endl;
    }

    cout << endl;
    return 0;
}

