#include <iostream>
using namespace std;
class B;
class C;

class A {
private:
    int privateA;
protected:
    int protectedA;

public:
    A(int a, int b) : privateA(a), protectedA(b) {}

    friend class FriendClass;
};
class B {
private:
    int privateB;
protected:
    int protectedB;

public:
    B(int x, int y) : privateB(x), protectedB(y) {}
    friend class FriendClass;
};
class C {
private:
    int privateC;
protected:
    int protectedC;

public:
    C(int p, int q) : privateC(p), protectedC(q) {}
    friend class FriendClass;
};
class FriendClass {
public:
    void displayData(const A& a, const B& b, const C& c) {
        cout << "Accessing private and protected members from A, B, and C:" << endl;
        cout << "Class A - Private: " << a.privateA << ", Protected: " << a.protectedA << endl;
        cout << "Class B - Private: " << b.privateB << ", Protected: " << b.protectedB << endl;
        cout << "Class C - Private: " << c.privateC << ", Protected: " << c.protectedC << endl;
    }
};

int main() {
    A objA(10, 20);
    B objB(30, 40);
    C objC(50, 60);
    FriendClass friendObj;
    friendObj.displayData(objA, objB, objC);
    return 0;
}
