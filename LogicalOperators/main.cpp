#include <iostream>

using namespace std;

int main()
{
    int num {};
    const int lower {10};
    const int upper {20};

    cout << boolalpha;

    // Determin if an entered integer is between two other integers.
    // Assume lower < upper.

    // cout << "Enter an integer - the bounds are " << lower << " and " << upper << ": ";
    // cin >> num;

    // bool within_bounds {false};

    // within_bounds = (num > lower && num < upper);
    // cout << num << " is between " << lower << " and " << upper << ": " << within_bounds << endl;
    
    // Determine if an enetered integer is outside the two other integers
    // Assume lower < upper

    // cout << "\nEnter an integer - the bounds are " << lower << " and " << upper << ": ";
    // cin >> num;

    // bool outside_bounds {false};
    // outside_bounds = (num < lower || num > upper);
    // cout << num << " is outside " << lower << " and " << upper << ": " << outside_bounds << endl;

    // Determine if an entered integer is exactly on the boundary
    // Assume lower < upper

    // cout << "\nEnter an integer - the bounds are " << lower << " and " << upper << ": ";
    // cin >> num;

    // bool on_bounds {false};
    // on_bounds = (num == lower || num == upper);
    // cout << num << " is on one of the bounds which are " << lower << " and " << upper << ": " << on_bounds << endl;

    // Determine if you need to wear a coat,
    // based on temperature and wind speed.

    bool wear_coat {false};
    double temperature {};
    int wind_speed {};

    const int wind_speed_for_coat {25}; // > 25 requires coat.
    const double temperature_for_coat {45}; // < 45 requires coat.

    cout << "\nEnter the current temperature in (F): ";
    cin >> temperature;
    cout << "Enter windspeed in (mph): ";
    cin >> wind_speed;

    // Require coat if either conditions met.
    wear_coat = (temperature < temperature_for_coat || wind_speed > wind_speed_for_coat);
    cout << "Do you need to wear a coat using OR? " << wear_coat << endl;

    // Require coat if both consitions met.
    wear_coat = (temperature < temperature_for_coat && wind_speed > wind_speed_for_coat);
    cout << "Do you need to wear a coat using AND? " << wear_coat << endl;

    cout << endl;
    return 0;
}

