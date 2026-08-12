#include <iostream>
using namespace std;

int main() 
{
    int n ;
    cin >> n;
    for ( int i =1 ; i<n*2 ;i++){
        int row= min (i , 2*n-i);
        
        //spaces
        for ( int j = 1 ; j<=n-row ;j++){
            cout << "  " ;
        }
        //number 
        for( int j=1;j<=row;j++){
            cout<< row+j-1 <<" ";
        }
        //decresasing
        for(int j=row-1;j>=1;j--){
            cout<< j+row-1<<" ";
        }
        cout<<endl;

    }       
}