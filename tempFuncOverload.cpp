#include <iostream>
using namespace std;
template <typename T>
T sum(T a, T b) {
    return a + b;
}
template <typename T>
T sum(T a, T b, T c) {
    return a + b + c;
}
template <typename T>
T sum(T a, T b, T c, T d) {
    return a + b + c + d;
}

int main() {
    int a = 10, b = 20, c = 30, d = 40;
    cout << "Sum of two integers: " << sum(a, b) << endl;
    cout << "Sum of three integers: " << sum(a, b, c) << endl;
    cout << "Sum of four integers: " << sum(a, b, c, d) << endl;
    double x = 10.5, y = 20.5, z = 30.5, w = 40.5;
    cout << "Sum of two doubles: " << sum(x, y) << endl;
    cout << "Sum of three doubles: " << sum(x, y, z) << endl;
    cout << "Sum of four doubles: " << sum(x, y, z, w) << endl;

    return 0;
}
