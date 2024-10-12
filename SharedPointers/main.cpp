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

void func(std::shared_ptr<Test> p) {
    std::cout << "Use count: " << p.use_count() << std::endl;
}

int main() {
    // use_count - The number of shared_ptr objects
    // that are managing the heap object

    // std::shared_ptr<int> p1 {new int {100}};
    // cout << "Use count: " << p1.use_count() << endl; // 1

    // std::shared_ptr<int> p2 {p1}; // Shared Ownership
    // cout << "Use count: " << p1.use_count() << endl; // 2

    // p1.reset(); // Decrement the use_count; p1 is nulled out
    // cout << "Use count: " << p1.use_count() << endl; // 0
    // cout << "Use count: " << p2.use_count() << endl; // 1

    // cout << "================================================" << endl;

    // std::shared_ptr<Test> ptr = std::make_shared<Test>(100);
    // func(ptr);
    // cout << "Use count: " << ptr.use_count() << endl;

    // {
    //     std::shared_ptr<Test> ptr1 = ptr;
    //     cout << "Use count: " << ptr.use_count() << endl;
    //     {
    //         std::shared_ptr<Test> ptr2 = ptr;
    //         cout << "Use count: " << ptr.use_count() << endl;
    //         ptr.reset();
    //     }
    //     cout << "Use count: " << ptr.use_count() << endl;
    // }
    // cout << "Use count: " << ptr.use_count() << endl;

    cout << "================================================" << endl;

    std::shared_ptr<Account> acc1 = std::make_shared<Trust_Account>("Larry", 100000, 3.1);
    std::shared_ptr<Account> acc2 = std::make_shared<Checking_Account>("Moe", 5000);
    std::shared_ptr<Account> acc3 = std::make_shared<Savings_Account>("Larry", 6000);

    std::vector<std::shared_ptr<Account>> accounts;
    
    accounts.push_back(acc1);
    accounts.push_back(acc2);
    accounts.push_back(acc3);

    for(const auto &acc : accounts) {
        cout << *acc << endl;
        cout << "Use count: " << acc.use_count() << endl;
    }

    cout << endl;
    return 0;
}

