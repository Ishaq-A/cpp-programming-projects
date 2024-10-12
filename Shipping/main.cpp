/*
    Shipping cost calculator

    Ask the user for package dimensions in inches.
    length, width, height - These should be integers.

    All dimensions must be 10 inches or less to be shipped.

    Base cost $2.50
    If package volume > 100 cubic inches -> 10% surcharge.
    If package volume > 500 cubic inches -> 25% surcharge.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int length {}, width {}, height {};
    double base_cost {2.50};

    const int tier1_threshold {100}; // Volume
    const int tier2_threshold {500}; // Volume

    int max_length {10}; // Inches

    double tier1_surcharge {0.10}; // 10% Extra
    double tier2_surcharge {0.25}; // 25% Extra

    // All dimensions must be 10 inches or less.

    int package_volume {};

    cout << "Welcome to the package cost calculator" << endl;
    cout << "Enter the length, width, and height separated by spaces: ";
    cin >> length >> width >> height;

    if(length > max_length || width > max_length || height > max_length) {
        cout << "Sorry, package rejected - dimension exceeded" << endl;
    } else {
        double package_cost {};
        package_volume = length * width * height;
        package_cost = base_cost;

        if(package_volume > tier2_threshold) {
            package_cost += package_cost * tier2_surcharge;
            cout << "Adding tier 2 surcharge" << endl;
        } else if(package_volume > tier1_threshold) {
            package_cost += package_cost * tier1_surcharge;
            cout << "Adding tier 1 surcharge" << endl;
        }

        cout << fixed << setprecision(2);
        cout << "The volume of your package is: " << package_volume << endl;
        cout << "Your package will cost $" << package_cost << " to ship" << endl;
    }

    cout << endl;
    return 0;
}

