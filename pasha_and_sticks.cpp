#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    if (n % 2 != 0) {
        cout << 0;
    } else {
        long long x = n / 2;
        if (x % 2 == 0)
            cout << x / 2 - 1;
        else
            cout << x / 2;
    }

    return 0;
}