#include <iostream>
using namespace std;

class A final {
public:
    virtual int f() {
        return 10;
    }

    int g() {
        return 20;
    }
};

class B : public A {
public:
    int f() {
        return 30;
    }

    int g() {
        return 40;
    }
};

int main() {
    A* obj = new A();
    cout << obj->f() + obj->g();
}