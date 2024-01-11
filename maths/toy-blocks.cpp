#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    ll n;
    cin>>n;
    vector<ll>arr(n);
    ll mexx=INT_MIN;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>mexx){
            mexx=arr[i];
        }
    }
    //sort(arr.begin(),arr.end());
    ll sum=0;
   
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    double dsum=sum;
    double d=n-1;
    ll mmax=ceil(dsum/d);
    mmax=max(mmax,mexx);
    ll ans=abs(sum-(mmax*(n-1)));
    cout<<ans<<endl;
 
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