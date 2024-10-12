#include <iostream>

using namespace std;

// This program will calculate the area of a room.

int main()
{
    // Declaring and initialising variables.
    int room_width {0};
    int room_length {0};

    cout << "Enter the width of the room: ";
    // Assigning the user input to the variable using cin.
    cin >> room_width;

    cout << "Enter the length of the room: ";
    // Assigning the user input to the variable using cin.
    cin >> room_length;

    cout << "The area of the room is " << room_width * room_length << " square metres" << endl;

    return 0;
}

