#include <iostream>
using namespace std;

class Base {
public:
    virtual int sum(int a, int b, int c) {
        return a + b + c;
    }
};
class Derived : public Base {
public:
    int sum(int a, int b, int c) override {
        return (a + b + c) * 2;
    }
    int baseSum(int a, int b, int c) {
        return Base::sum(a, b, c);
    }
};

int main() {
    Base* basePtr;
    Derived derivedObj;
    cout << "Sum using Derived class (overridden function): " << derivedObj.sum(5, 10, 15) << endl;
    cout << "Sum using Base class method (via derived class object): " << derivedObj.baseSum(5, 10, 15) << endl;
    basePtr = &derivedObj;
    cout << "Sum using Base class method (via base class pointer to derived object): " << basePtr->sum(5, 10, 15) << endl;
    return 0;
}
