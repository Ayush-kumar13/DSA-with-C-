#include <iostream>
using namespace std;

int main() 
{
    int n ;
    cin>> n;
    
    for ( int i=0 ;i<=(n*2);i++){
        int k = (i < n) ? i : 2 * n - i;
        for ( int j=n;j>=(n-k);j--){
            cout << j<<" ";
        }
        for ( int j=1;j<2*(n-k);j++){
            cout <<"  "; 
        }
        for (int j = n-k; j<= n; j++){
    if (j == n-k && k == n)
        continue;
    cout << j << " ";
    }cout<< endl;        
    }
            }
