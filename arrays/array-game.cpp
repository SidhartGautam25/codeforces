#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

bool comp(const pair<int,int>&a,const pair<int,int>&b){
    return a.first<b.first;
} 

void solve(){
   ll n,k;
   cin>>n>>k;
   vector<ll>arr(n);
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   if(k>=3){
     cout<<"0"<<endl;
     return;
   }else if(k==1){
       sort(arr.begin(),arr.end());
       ll mmin= arr[0];
       for(int i=1;i<n;i++){
          mmin=min(mmin,arr[i]-arr[i-1]);
       }
       //mmin=min(arr[0],mmin);
       cout<<mmin<<endl;
       return;
   }else if(k==2){
    sort(arr.begin(),arr.end());
    ll mmin= LLONG_MAX;
    for(int i=1;i<n;i++){
        mmin=min(mmin,arr[i]-arr[i-1]);
    }
    arr.push_back(mmin);
    sort(arr.begin(),arr.end());
    mmin=arr[0];
    for(int i=1;i<=n;i++){
        mmin=min(mmin,arr[i]-arr[i-1]);
    }
    cout<<mmin<<endl;
    return;
       
   }

 
   
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;

    while(t>0){
    
        solve();
        t=t-1;
     }

    return 0;
}