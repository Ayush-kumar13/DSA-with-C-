# include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int>a(n);
    for ( int i=0; i<n ; i++){
        cin >> a[i];
    }
    int target;
    cin>> target;
    sort(a.begin(),a.end());

    for (int i=0;i<n;i++){
        if(a[i]==a[i-1]){
            continue;
        }
        int left=i+1;
        int right=n-1;
        while(left < right ){
            int sum=a[i]+a[left]+a[right];
            if(sum == target){
                cout<< a[i]<<", "<<a[left]<<"and"<<a[right]<<endl;
                  int x=left;
            int y=right;
            while(left<right){
                left++;
            }
            while(left<right){
                right--;
            }
            }
          
            else if (sum<target){
                    left++;          
            }
            else{
                right--;
            }

        }

    }
}