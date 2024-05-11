#include <iostream>
using namespace std;

int main() {
    double temp;
    char unit;

    cout << "Enter temperature value: ";
    cin >> temp;

    cout << "Enter unit of measurement (C, F, or K): ";
    cin >> unit;

    double convertedTemp;

    switch (unit) {
        case 'C':
        case 'c':
            convertedTemp = temp * 9 / 5 + 32; // Celsius to Fahrenheit
            cout << temp << " Celsius = " << convertedTemp << " Fahrenheit" << endl;

            convertedTemp = temp + 273.15; // Celsius to Kelvin
            cout << temp << " Celsius = " << convertedTemp << " Kelvin" << endl;
            break;
        case 'F':
        case 'f':
            convertedTemp = (temp - 32) * 5 / 9; // Fahrenheit to Celsius
            cout << temp << " Fahrenheit = " << convertedTemp << " Celsius" << endl;

            convertedTemp = (temp - 32) * 5 / 9 + 273.15; // Fahrenheit to Kelvin
            cout << temp << " Fahrenheit = " << convertedTemp << " Kelvin" << endl;
            break;
        case 'K':
        case 'k':
            convertedTemp = temp - 273.15; // Kelvin to Celsius
            cout << temp << " Kelvin = " << convertedTemp << " Celsius" << endl;

            convertedTemp = (temp - 273.15) * 9 / 5 + 32; // Kelvin to Fahrenheit
            cout << temp << " Kelvin = " << convertedTemp << " Fahrenheit" << endl;
            break;
        default:
            cout << "Invalid unit of measurement entered!" << endl;
            break;
    }

    return 0;
}
