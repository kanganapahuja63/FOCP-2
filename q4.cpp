#include <iostream>
using namespace std;

int main() {
    int item_no, quantity;
    float unit_price, amount, discount, total;

    cout << "Enter Item Number: ";
    cin >> item_no;

    cout << "Enter Quantity: ";
    cin >> quantity;

    cout << "Enter Unit Price: ";
    cin >> unit_price;

    amount = quantity * unit_price;

    discount = amount * 20 / 100;

    total = amount - discount;

    cout << "Item Number: " << item_no << endl;
    cout << "Total Amount before discount: " << amount << endl;
    cout << "Discount (20%): " << discount << endl;
    cout << "Final Bill Amount: " << total << endl;

    return 0;
}
