#include <iostream>
using namespace std;
class student{
    public:
    int marks;
    protected:
    int rollnumber;
    public:
    string name;
    
    void setdata(int m, int r) {
        marks = m;
        rollnumber = r;

    }
    int getmarks( ){
      return marks;
    }
}