#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int n) {
    int original = n;
    int digits = 0;
    int sum = 0;

    int temp = n;

    while (temp != 0) {
        digits++;
        temp = temp / 10;
    }

    temp = n;

    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp = temp / 10;
    }

    return sum == original;
}

int main() {
    int n;
    cin >> n;

    cout << boolalpha << isArmstrong(n);

    return 0;
}