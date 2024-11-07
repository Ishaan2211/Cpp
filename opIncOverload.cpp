#include <iostream>
using namespace std;
class Number {
private:
    int a;

public:
    Number(int val) : a(val) {}
    Number operator++() {
        a += 5;
        return *this;
    }
    Number operator--() {
        a -= 1;
        return *this;
    }
    Number operator-() {
        a = -a;
        return *this;
    }
    friend void display(const Number& n);
};
void display(const Number& n) {
    cout << "Value of a: " << n.a << endl;
}

int main() {
    Number num(10);
    cout << "Initial ";
    display(num);
    ++num;
    cout << "After increment (by 5) ";
    display(num);
    --num;
    cout << "After decrement (by 1) ";
    display(num);
    -num;
    cout << "After negation ";
    display(num);
    return 0;
}
