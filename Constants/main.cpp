/*
Franks Carpet Cleaning Service
Charges £30 per room.
Sales tax rate is 6%.
Estimates are valid for 30 days.

Prompt the user for the number of rooms they would like cleaned
and provide an estimate such as:

Estimate for carpet cleaning service:
Number of rooms: 2
Price per room: £30
Cost: £60
Tax: £3.6
============================================
Total estimate: £63.6
This estimate is valid for 30 days

Pseudocode:
    Prompt the user to enter the number of rooms
    Display number of rooms
    Display price per room

    Display cost: (number of rooms * price per room)
    Display tax: number of rooms * price per room * tax rate
    Display total estimate: Cost + Tax
    Display estimate expiration time
*/

# include <iostream>

using namespace std;

int main()
{
    cout << "Hello welcome to Frank's Carpet Cleaning Service" << endl;
    cout << "\nHow many small rooms would you like cleaned? ";

    int number_of_small_rooms {0};
    cin >> number_of_small_rooms;

    cout << "\nHow many large rooms would you like cleaned? ";

    int number_of_large_rooms {0};
    cin >> number_of_large_rooms;

    const double price_per_small_room {25.0};
    const double price_per_large_room {35.0};
    const double sales_tax {0.06};
    const int estimate_expiry {30}; // Days

    cout << "\nEstimate for carpet cleaning service" << endl;
    cout << "Number of small rooms: " << number_of_small_rooms << endl;
    cout << "Number of large rooms: " << number_of_large_rooms << endl;
    cout << "Price per small room: " << price_per_small_room << endl;
    cout << "Price per large room: " << price_per_large_room << endl;

    cout << "Cost: $" << (price_per_small_room * number_of_small_rooms) + 
    (price_per_large_room * number_of_large_rooms) << endl;

    cout << "Tax: $" << ((price_per_small_room * number_of_small_rooms) + 
    (price_per_large_room * number_of_large_rooms)) * sales_tax << endl;

    cout << "================================================" << endl;
    
    cout << "Total estimate: $" << ((price_per_small_room * number_of_small_rooms) + 
    (price_per_large_room * number_of_large_rooms)) + ((price_per_small_room * number_of_small_rooms) + 
    (price_per_large_room * number_of_large_rooms)) * sales_tax << endl;

    cout << "This estimate is valid for " << estimate_expiry << " days " << endl;

    return 0;
}

