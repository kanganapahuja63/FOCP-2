#include <iostream>
using namespace std;

int main() {
    float a, b, c, average;

    cout << "Enter marks of three students: ";
    cin >> a >> b >> c;

    average = (a + b + c) / 3;

    cout << "Average marks = " << average;

    return 0;
}

