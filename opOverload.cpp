#include <iostream>
using namespace std;

class Number {
private:
    int a;

public:
    Number(int val) : a(val) {}

    Number operator+(const Number& other) {
        return Number(this->a + other.a);
    }
    Number operator-(const Number& other) {
        return Number(this->a - other.a);
    }
    friend Number add(const Number& n1, const Number& n2);
    friend Number subtract(const Number& n1, const Number& n2);

    void display() const {
        cout << "Value: " << a << endl;
    }
};
Number add(const Number& n1, const Number& n2) {
    return Number(n1.a + n2.a);
}
Number subtract(const Number& n1, const Number& n2) {
    return Number(n1.a - n2.a);
}

int main() {
    Number num1(10), num2(5);
    Number sum = num1 + num2;
    cout << "Sum (using member function): ";
    sum.display();
    Number diff = num1 - num2;
    cout << "Difference (using member function): ";
    diff.display();
    Number sumFriend = add(num1, num2);
    cout << "Sum (using friend function): ";
    sumFriend.display();
    Number diffFriend = subtract(num1, num2);
    cout << "Difference (using friend function): ";
    diffFriend.display();
    return 0;
}
