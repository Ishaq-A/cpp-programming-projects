#include <iostream>
#include <cmath>

using namespace std;

double fahrenheit_to_celsius(double fahrenheit_temperature);
double fahrenheit_to_kelvin(double fahrenheit_temperature);
void temperature_conversion(double fahrenheit_temperature);

double fahrenheit_to_celsius(double fahrenheit_temperature)
{
    return round((5.0 / 9.0) * (fahrenheit_temperature - 32));
}

double fahrenheit_to_kelvin(double fahrenheit_temperature)
{
    return round(fahrenheit_to_celsius(fahrenheit_temperature) + 273);
}

void temperature_conversion(double fahrenheit_temperature)
{
    double celsius_temperature = fahrenheit_to_celsius(fahrenheit_temperature);
    double kelvin_temperature = fahrenheit_to_kelvin(fahrenheit_temperature);

    cout << "The fahrenheit temperature " << fahrenheit_temperature << " degrees is equivalent to " 
         << celsius_temperature << " degrees celsius and " 
         << kelvin_temperature << " degrees kelvin." << endl;
}

int main()
{
    double fahrenheit_temperature {46.5};

    temperature_conversion(fahrenheit_temperature);

    cout << endl;
    return 0;
}

