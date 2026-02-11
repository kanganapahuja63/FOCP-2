#include <iostream>
using namespace std;

void swap(int &a, int &b) {
int temp = a;
a = b;
b = temp;
cout << "a and b before swap in function" << a << b;
}

int main ( ){
    int x,y;
    cout<< "provide 2 integers" << endl;
    cin >> x >> y;
    cout << "x and y in main before function call" << x << y;
    swap (x,y);
    cout << "x and y in main after function call" << x << y;
    return -1;
}

