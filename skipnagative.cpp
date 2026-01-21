#include <iostream>
using namespace std;
int main( ){
    int num;
    int sum = 0;
    do { 
        cout << "enter a number: ";
        cin >> num;
        if( num<0){
            cout <<" invalid input!!\n";
            break;
        }
        sum += num;
    }
    while(num >0);
    cout<< "total sum: "<< sum;
    return 0;
}