#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int t;
    cin >> t;

    sort(a.begin(), a.end());

    for (int i = 0; i < n - 2; i++) {

        if (i > 0 && a[i] == a[i - 1])
            continue;

        int j = i + 1;
        int k = n - 1;

        while (j < k) {

            int sum = a[i] + a[j] + a[k];

            if (sum == t) {
                cout << a[i] << ", " << a[j] << " and " << a[k] << endl;

                int x = a[j];
                int y = a[k];

                while (j < k && a[j] == x)
                    j++;

                while (j < k && a[k] == y)
                    k--;
            }
            else if (sum < t) {
                j++;
            }
            else {
                k--;
            }
        }
    }

    return 0;
}