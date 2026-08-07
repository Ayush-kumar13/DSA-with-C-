#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int z = 0; z < 2; z++)
    {
        if (z == 0)
        {
            
            for (int i = 0; i <= n; i++)
            {
              
                for (int j = 0; j < i; j++)
                {
                    cout << "  ";
                }

                
                for (int j = n - i; j >= 0; j--)
                {
                    cout << j << " ";
                }

               
                for (int j = 1; j <= n - i; j++)
                {
                    cout << j << " ";
                }

                cout << endl;
            }
        }
        else
        {
            
            for (int i = 1; i <= n; i++)
            {
              
                for (int j = 0; j < n - i; j++)
                {
                    cout << "  ";
                }

               
                for (int j = i; j >= 0; j--)
                {
                    cout << j << " ";
                }

               
                for (int j = 1; j <= i; j++)
                {
                    cout << j << " ";
                }

                cout << endl;
            }
        }
    }

    return 0;
}