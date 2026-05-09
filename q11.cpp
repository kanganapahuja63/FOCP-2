#include<iostream>
using namespace std;

int main( ){
    int quantity;
    int price_per_item, total, discount = 0;

    cout << "enter quantity of items: ";
    cin >> quantity;
    cout << "enter price per item: ";
    cin >> price_per_item;
    total = quantity * price_per_item;
    if (quantity > 1000) {
        discount = 0.10 * total;
        total = total - discount;
    
    }
    cout << "discount applied" << discount << endl;
    cout << " total expense: "<< total << endl;
        return 0;

  
}