#include <iostream>
using namespace std;

int main() 
{
    int N;
    cin>>N;
    for (int i=0;i<N;i++){
        int val=1;
        for ( int j=0 ;j<=i;j++){
            cout<< val<<" ";
            val=val*(i-j)/(j+1);
        }cout<< endl;
    }
}