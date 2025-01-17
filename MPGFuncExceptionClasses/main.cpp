#include <iostream>

using namespace std;

class DivideByZeroException {
};

class NegativeValueException {
};

double calculate_mpg(int miles, int gallons) {
    if(gallons == 0) {
        throw DivideByZeroException();
    }

    if(miles < 0 || gallons < 0) {
        throw NegativeValueException();
    }

    return static_cast<double> (miles) / gallons;
}

int main() {
    int miles {};
    int gallons {};
    double miles_per_gallon {};

    cout << "Enter the miles driven: ";
    cin >> miles;
    cout << "Enter the gallons used: ";
    cin >> gallons;

    try {
        miles_per_gallon = calculate_mpg(miles, gallons);
        cout << "Result: " << miles_per_gallon << endl;
    } catch(const DivideByZeroException &ex) {
        std::cerr << "Sorry, you can't divide by zero" << endl;
    } catch(const NegativeValueException &ex) {
        std::cerr << "Sorry, one of your parameters is negative" << endl;
    }
    
    cout << endl;
    return 0;
}

