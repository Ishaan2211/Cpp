#include <iostream>
using namespace std;
int sum(int a, int b) {
    return a + b;
}
int sum(int a, int b, int c) {
    return a + b + c;
}
int sum(int a, int b, int c, int d) {
    return a + b + c + d;
}

int main() {
    int a, b, c, d;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Sum of two numbers: " << sum(a, b) << endl;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    cout << "Sum of three numbers: " << sum(a, b, c) << endl;
    cout << "Enter four numbers: ";
    cin >> a >> b >> c >> d;
    cout << "Sum of four numbers: " << sum(a, b, c, d) << endl;

    return 0;
}
