#include <iostream>
using namespace std;
int main ( ){
int marks;
int grade;
cout << "enter yout marks(0-100): ";
cin >> marks ;

grade = marks / 10;

switch (grade) {
    case 10:
    case 9:
    cout << "grade: A+";
    break;
    case 8:
    cout << "grade: A";
    break;
    case 7:
    cout << "grade: B" ;
    break;
    case 6:
    cout << "grade: C";
    break;
    case 5:
    cout << " grade: D";
    break;
    default :
    if (marks >= 0 && marks < 50)
    cout << "grade: F (Fail)";
    else 
    cout << "inavlid marks!";
}
return 0;

}