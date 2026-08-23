#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    int n;
    cin>>n;
    int last_dig,cal;
    int sum=0;
    int count =0;

    while(n>0){
        last_dig=n%10;
        n=n/10;
        cal=pow(2,count)*last_dig;
        sum=sum+cal;
        count++;
    }
    cout<< sum;
}