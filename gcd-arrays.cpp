#include <bits/stdc++.h>
using namespace std;


int countOdds(int low, int high) {
        if(low%2==1){
            int temp=(high-low)/2;
            return temp+1;
        }
        else if(low%2==0 and high%2==0){
            return (high-low)/2;
        }
        else if(low%2==0 and high%2==1){
            //cout<<" here i am"<<endl;
            int temp=(high-low)/2;
            return temp+1;
        }
        return (high-low)/2;
    }

void solve(){
   
   int l,r,k;
   cin>>l>>r>>k;
   
   if(l==r and l==1){
    cout<<"NO"<<endl;
    return;
   }else if(l==r){
    cout<<"YES"<<endl;
    return;
   }else{
     int odd=countOdds(l,r);
     if(odd<=k){
        cout<<"YES"<<endl;
        return;
     }else{
        cout<<"NO"<<endl;
        return;
     }

   }
   
}
int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}