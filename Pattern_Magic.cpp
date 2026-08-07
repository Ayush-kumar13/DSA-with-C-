#include <iostream>

using namespace std;

int main()

{

    int n;

    cin >> n;

    for (int i = 1; i <= 2 * n - 1; i++)

    {

        int stars, spaces;

        if (i <= n)

        {

            stars = n - i + 1;

            spaces = 2 * (i - 1);
        }

        else

        {

            stars = i - n + 1;

            spaces = 2 * (2 * n - i - 1);
        }

        // Left Stars

        for (int j = 1; j <= stars; j++)

        {

            cout << "*";
        }

        // Spaces

        for (int j = 1; j <= spaces; j++)

        {

            cout << " ";
        }

        // Right Stars

        for (int j = 1; j <= stars; j++)

        {

            cout << "*";
        }

        cout << endl;
    }

    return 0;
}