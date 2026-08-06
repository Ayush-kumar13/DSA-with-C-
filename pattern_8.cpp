#include <iostream>
using namespace std;

int main() 
{
    int n ;
    cin >> n;
    


    for ( int i =1 ; i<=n ;i++){
        int a=1;
        
        for (int j=n ; j>=i;j--){
            cout<< a<<" ";
            a++;
        }
        // if(i==1){
        //     continue;

        // }
        if(i>1){
             for (int j=1; j<=2*i-3;j++){
            cout<< "*"<< " ";
        }
       

        }
       cout<< endl;
    }
}