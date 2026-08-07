#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= 2; i++)
    {
        if (i == 1)
        {
            for (int i = 1; i <= (n / 2) + 1; i++)
            {
                if (i == 1)
                {
                    for (int j = 1; j <= n; j++)
                    {
                        if (j == 1 || j >= (n / 2) + 1)
                        {
                            cout << "*";
                        }
                        else
                        {
                            cout << " ";
                        }
                    }
                }
                else
                {
                    if (i == (n/2)+1)
                    {
                        for (int i = 1; i <= n; i++)
                        {
                            cout << "*";
                        }
                    }
                    else
                    {
                        for (int j = 1; j <= n; j++)
                        {
                            if (j == 1 || j == (n/2)+1)
                            {
                                cout << "*";
                            }
                            else
                            {
                                cout << " ";
                            }
                        }
                    }
                }

                cout << endl;
            }
        }
        else
        {           
                for (int i = 1; i <= (n / 2)-1; i++)
                {
                    for (int j = 1; j <= n; j++)
                    {
                        if (j == (n / 2) + 1 || j == n)
                        {
                            cout << "*";
                        }
                        else
                        {
                            cout << " ";
                        }
                    }cout<< endl;
                }
            
            
            {
                for (int j = 1; j <= n; j++)
                {
                    if (j <= (n/2)+1 || j == n)
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout << " ";
                    }
                }cout << endl;
            }

            
        }
    }

    return 0;
}