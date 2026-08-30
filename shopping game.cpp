#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int M, N;
        cin >> M >> N;

        int aayush = 0;
        int harshit = 0;
        int smartphone = 1;

        bool aayushTurn = true;

        while (true)
        {
            if (aayushTurn)
            {
                if (aayush + smartphone > M)
                {
                    cout << "Harshit" << endl;
                    break;
                }

                aayush += smartphone;
            }
            else
            {
                if (harshit + smartphone > N)
                {
                    cout << "Aayush" << endl;
                    break;
                }

                harshit += smartphone;
            }

            smartphone++;
            aayushTurn = !aayushTurn;
        }
    }

    return 0;
}