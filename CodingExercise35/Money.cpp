#include <iostream>
#include "Money.h"

Money::Money(int dollars, int cents)
    : dollars (dollars), cents (cents) {

}

Money::Money(int total) {
    dollars = total / 100;
    cents = total % 100;
}

bool Money::operator==(const Money &rhs) const {
    return dollars == rhs.dollars && cents == rhs.cents;
}

bool Money::operator!=(const Money &rhs) const {
    return !(rhs == *this);
}

Money operator+(const Money &lhs, const Money &rhs) {
    int total = (lhs.dollars + rhs.dollars) * 100;
    total += lhs.cents + rhs.cents;

    return Money {total};
}

