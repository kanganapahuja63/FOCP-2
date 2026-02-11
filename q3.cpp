#include <iostream>
using namespace std;

int main() {
    float celsius, fahrenheit;
    int choice;

    cout << "Temperature Conversion Program\n";
    cout << "1. Fahrenheit to Celsius\n";
    cout << "2. Celsius to Fahrenheit\n";
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> fahrenheit;

        celsius = (fahrenheit - 32) * 5 / 9;

        cout << "Temperature in Celsius = " << celsius;
    }
    else if (choice == 2) {
        cout << "Enter temperature in Celsius: ";
        cin >> celsius;

        fahrenheit = (celsius * 9 / 5) + 32;

        cout << "Temperature in Fahrenheit = " << fahrenheit;
    }
    else {
        cout << "Invalid choice!";
    }

    return 0;
}
