#include <iostream>
using namespace std;

int main() {
    int n;
    float basic_salary, bonus, net_salary;

    cout << "Enter number of employees: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "\nEnter basic salary of employee " << i << ": ";
        cin >> basic_salary;

        bonus = basic_salary * 12 / 100;

        net_salary = basic_salary + bonus;

        cout << "Bonus (12%): " << bonus << endl;
        cout << "Net Salary: " << net_salary << endl;
    }

    return 0;
}
