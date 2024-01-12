#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
   ll n,x;
   cin>>n>>x;
   vector<ll>arr(n);
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   sort(arr.begin(),arr.end());
   ll count=0;
   int i=n-1;
   while(i>=0){
    ll curr=arr[i];
    int j=i;
    while(j>=0 and (arr[j]*(i-j+1))<x){
        j--;
    }
    if(j>=0){
        count++;
        i=j;
    }else{
        bfreak;
    }
   }
   cout<<count<<endl;
   
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