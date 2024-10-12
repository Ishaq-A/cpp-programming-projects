#include <iostream>
#include <memory>
#include "Account.h"
#include "Checking_Account.h"
#include "Savings_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"
#include "IllegalBalanceException.h"
#include "InsufficientFundsException.h"

using namespace std;

int main() {
    std::unique_ptr<Account> moes_account;
    std::unique_ptr<Account> larrys_account;

    try {
        larrys_account = std::make_unique<Savings_Account>("Larry", -2000.0);
        cout << *larrys_account << endl;
    } catch(const IllegalBalanceException &ex) {
        std::cerr << ex.what() << endl;
    }

    try {
        moes_account = std::make_unique<Savings_Account>("Moe", 10000);
        cout << *moes_account << endl;
        moes_account -> withdraw(500.0);
        cout << *moes_account << endl;
        moes_account -> withdraw(1000.0);
        cout << *moes_account << endl;
    } catch(const IllegalBalanceException &ex) {
        std::cerr << ex.what() << endl;
    } catch(const InsufficientFundsException &ex) {
        std::cerr << ex.what() << endl;
    }

    cout << "Program completed successfully" << endl;
    
    cout << endl;
    return 0;
}

