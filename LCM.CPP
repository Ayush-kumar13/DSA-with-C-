#include <bits/stdc++.h>

using namespace std;

int main()

{

    int n, m;

    cin >> n >> m;

    int a = n;

    int b = m;

    while (a != b)

    {

        if (a < b)

            a = a + n;

        else

            b = b + m;

    }

    cout << a;

}