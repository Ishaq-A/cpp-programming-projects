#ifndef _MONEY_MONEY_H
#define _MONEY_MONEY_H

#include <iostream>

class Money {
    friend Money operator+(const Money &lhs, const Money &rhs);

private:    
    int dollars;
    int cents;
public:
    Money(int dollars, int cents); 
    Money(int total);
    bool operator==(const Money &rhs) const;
    bool operator!=(const Money &rhs) const;
};

#endif

