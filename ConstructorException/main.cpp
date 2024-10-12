#include <iostream>
#include <memory>
#include "Account.h"
#include "Checking_Account.h"
#include "Savings_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"
#include "IllegalBalanceException.h"

using namespace std;

int main() {
    try {
        std::unique_ptr<Account> moes_account = std::make_unique<Checking_Account>("Moe", -10.0);
        cout << *moes_account << endl;
    } catch(const IllegalBalanceException &ex) {
        std::cerr << "Couldn't create account - negtaive balance" << endl;
    }

    cout << "Program executed successfully" << endl;
    
    cout << endl;
    return 0;
}

