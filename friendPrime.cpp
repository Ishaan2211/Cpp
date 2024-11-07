#include <iostream>
#include <cmath>
using namespace std;

class PrimeChecker;

class Number {
private:
    int num;

public:
    Number(int n) : num(n) {}
    friend class PrimeChecker;
};

class PrimeChecker {
public:
    bool isPrime(const Number& number) {
        if (number.num <= 1) return false;
        for (int i = 2; i <= sqrt(number.num); ++i) {
            if (number.num % i == 0) return false;
        }
        return true;
    }
};

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    Number number(num);
    PrimeChecker checker;
    if (checker.isPrime(number)) {
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is not a prime number." << endl;
    }

    return 0;
}
