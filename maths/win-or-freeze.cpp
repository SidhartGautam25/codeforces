#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

bool check_prime(ll n){
    for(ll i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

void solve(){
    ll n;
    cin>>n;
    if(check_prime(n)){
        cout<<"1"<<endl;
        cout<<"0"<<endl;
        return;
    }
    vector<ll>arr;
    ll t=n;
    for(ll i=2;i*i<=t;i++){
        if(t%i==0){
            while(t>0 and t%i==0){
                arr.push_back(i);
                t=t/i;
            }
        }
    }
   if(arr.size()==1){
       cout<<"2"<<endl;
       return;
   }
   else if(arr.size()==0){
       cout<<"1"<<endl;
       cout<<"0"<<endl;
       return;
   }
   else if(arr.size()==2){
       if(arr[0]*arr[1]==n){
           cout<<"2"<<endl;
           return;
       }else{
           cout<<"1"<<endl;
           cout<<arr[0]*arr[1]<<endl;
           return;
       }
   }else{
       cout<<"1"<<endl;
       cout<<arr[0]*arr[1]<<endl;
       return;
   }
  cout<<"2"<<endl;
   
 
 
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t=1;
    //cin>>t;
    while(t--){
        solve();
     }

    return 0;
}