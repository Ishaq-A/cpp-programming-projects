#include <iostream>

using namespace std;

double calculate_mpg(int miles, int gallons) {
    if(gallons == 0) {
        throw 0;
    }

    if(miles < 0 || gallons < 0) {
        throw std::string {"Negative value error"};
    }

    return static_cast<double> (miles) / gallons;
}

int main() {
    int miles {};
    int gallons {};
    double miles_per_gallon {};

    cout << "Enter the miles: ";
    cin >> miles;
    cout << "Enter the gallons: ";
    cin >> gallons;

    try {
        miles_per_gallon = calculate_mpg(miles, gallons);
        cout << "Result: " << miles_per_gallon << endl;
    } catch(int &ex) {
        std::cerr << "Tried to divide by zero" << endl;
    } catch(std::string &ex) {
        std::cerr << ex << std::endl;
    }

    
    cout << "Bye" << endl;
    return 0;
}

