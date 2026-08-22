#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int x;
    cin >> x;
    int last_dig;
    for (int i = 1; i <= N; i++)
    {
        last_dig = x % 10;
        int check = 9 - last_dig;
        if (check < last_dig)
        {
            cout << check;
        }
        else
        {
            cout << last_dig;
        }
    }
}