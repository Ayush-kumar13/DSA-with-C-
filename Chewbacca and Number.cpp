#include <iostream>

using namespace std;

int main()

{

    string x;

    cin >> x;

    for (int i = 0; i < x.length(); i++)

    {

        int digit = x[i] - '0';

        int check = 9 - digit;

        if (i == 0 && check == 0)

        {

            cout << digit;

        }

        else

        {

            cout << min(digit, check);

        }

    }

    return 0;

}