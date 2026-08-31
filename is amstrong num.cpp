#include <iostream>
#include <cmath>
using namespace std;
bool isamstrong(int a){
    int original=a;
    int digits=0;
    int sum=0;

    int temp=a;
    while( temp!=0){
        digits++;
        temp=temp/10;
    }

    temp=a;
    while(temp!=0){
        int digit=temp%10;
        sum+=pow(digit,digits);
        temp=temp/10;

    }
    return sum== original;
}

int main (){
    int num;cin>>num;
    cout << boolalpha <<isamstrong(num);


}