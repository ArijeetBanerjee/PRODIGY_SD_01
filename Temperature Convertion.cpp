#include <iostream>
using namespace std;

int main() {
    double temperature;
    char unit;

    cout << "Temperature Conversion Program" << endl;
    cout << "Enter a temperature value: ";
    cin >> temperature;

    cout << "Enter the unit of measurement (C/F/K): ";
    cin >> unit;

    switch (unit) {
        case 'C':
        case 'c':
            cout << "Temperature in Fahrenheit: " << (temperature * 9 / 5) + 32 << " F" << endl;
            cout << "Temperature in Kelvin: " << temperature + 273.15 << " K" << endl;
            break;
        case 'F':
        case 'f':
            cout << "Temperature in Celsius: " << (temperature - 32) * 5 / 9 << " C" << endl;
            cout << "Temperature in Kelvin: " << (temperature - 32) * 5 / 9 + 273.15 << " K" << endl;
            break;
        case 'K':
        case 'k':
            cout << "Temperature in Celsius: " << temperature - 273.15 << " C" << endl;
            cout << "Temperature in Fahrenheit: " << (temperature - 273.15) * 9 / 5 + 32 << " F" << endl;
            break;
        default:
            cout << "Invalid unit of measurement. Please use C, F, or K." << endl;
            break;
    }

    return 0;
}
