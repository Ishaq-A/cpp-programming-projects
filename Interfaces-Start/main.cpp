#include <iostream>

using namespace std;

class I_Printable {

    friend std::ostream &operator<<(std::ostream &os, const I_Printable &obj);

public:
    virtual void print(std::ostream &os) const = 0;
};

std::ostream &operator<<(std::ostream &os, const I_Printable &obj) {
    obj.print(os);

    return os;
}

class Account: public I_Printable {
public:
    virtual void withdraw(double amount) {
        std::cout << "In Account::withdraw" << std::endl;
    }

    virtual void print(std::ostream &os) const override {
        os << "Account display";
    }

    virtual ~Account() {}
};

class Checking: public Account {
public:
    virtual void withdraw(double amount) {
        std::cout << "In Account::withdraw" << std::endl;
    }

    virtual void print(std::ostream &os) const override {
        os << "Checking display";
    }

    virtual ~Checking() {}
};

class Savings: public Account {
public:
    virtual void withdraw(double amount) {
        std::cout << "In Savings::withdraw" << std::endl;
    }

    virtual void print(std::ostream &os) const override {
        os << "Savings display";
    }

    virtual ~Savings() {}
};

class Trust: public Account {
public:
    virtual void withdraw(double amount) {
        std::cout << "In Trust::withdraw" << std::endl;
    }

    virtual void print(std::ostream &os) const override {
        os << "Trust display";
    }

    virtual ~Trust() {}
};

int main() {

    Account *p1 = new Account();
    cout << *p1 << endl;

    Account *p2 = new Checking();
    cout << *p2 << endl;

    Account *p3 = new Savings();
    cout << *p3 << endl;

    Account *p4 = new Trust();
    cout << *p4 << endl;

    delete p1;
    delete p2;
    delete p3;
    delete p4;

    // Account a;
    // cout << a << endl;

    // Checking c;
    // cout << c << endl;

    // Savings s;
    // cout << s << endl;

    // Trust t;
    // cout << t << endl;
    
    cout << endl;
    return 0;
}

