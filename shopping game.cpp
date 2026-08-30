#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--){
        int N,M;
        cin >> N >> M;
        int aayush =0;
        int harshit=0;
        int smartphone=1;
        bool aayushTurn=true;
        while(true){
            if(aayushTurn){
                if(aayush+smartphone > M){
                    cout<< "harshit"<<endl;
                    break;
                }
                aayush+=smartphone;

            }
            else
            if(harshit+smartphone > N){
                cout<<"aayush"<<endl;
                break;
            }
            harshit+=smartphone;
            
        }smartphone++;
            aayushTurn=!aayushTurn;        
    }

}