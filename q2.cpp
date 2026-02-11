#include <iostream>
using namespace std;

int main() {
    float radius, area;
    float pi = 3.14;

    cout << "Enter radius of the fountain: ";
    cin >> radius;

    area = pi * radius * radius;

    cout << "Area of the circle = " << area;

    return 0;
}
