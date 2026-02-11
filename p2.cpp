#include <iostream>
using namespace std;

void swapbyvalue (int a, int b) {
    int temp = a;
    a=b;
    b= temp;
    cout << "inside swapbyvalue function a and b are " << a << " " << b << endl;

}

void swapbyreference (int &a, int &b) {
    int temp = a;
    a =b;
    b = temp;
    cout << "inside swapbyreference function a and b are " << a << " "<< b << endl;

}
int main( ){
    int a,b;
    cout << " enter two numbers:";
    cin >> a >> b;
    
}