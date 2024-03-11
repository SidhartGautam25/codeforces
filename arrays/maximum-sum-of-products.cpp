#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define mod LLONG_MAX
 


ll myfun(vector<ll>&a,vector<ll>&b,ll i,ll j,vector<vector<ll>>&dp){
    if(dp[i][j] != -1){
        return dp[i][j];
    }
    if(i==j){
        ll p=a[i]*b[i];
        dp[i][j]=p;
        return p;
    }else if(j-i==1){
        ll p=a[i]*b[j]+a[j]*b[i];
        dp[i][j]=p;
        return p;
    }else{
        dp[i][j]=a[i]*b[j]+a[j]*b[i]+myfun(a,b,i+1,j-1,dp);
        return dp[i][j];
    }



}

void solve(){
    ll n;
    cin>>n;
    vector<ll>a(n);
    vector<ll>b(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    for(ll i=0;i<n;i++){
        cin>>b[i];
    }
    vector<ll>psum(n);
    ll p=0;
    for(ll i=0;i<n;i++){
        p=p+a[i]*b[i];
        psum[i]=p;
    }
    vector<vector<ll>>dp(n,vector<ll>(n,-1));
    ll ans=p;
    for(ll i=0;i<n;i++){
        for(ll j=i+1;j<n;j++){
            ll pre=(i-1>=0)?psum[i-1]:0;
            ll in=myfun(a,b,i,j,dp);
            ll post=psum[n-1]-psum[j];
            ll total=in+pre+post;
            ans=max(ans,total);
        }
    }
    cout<<ans<<endl;

 
   
}
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    ll t=1;
    
    //cin>>t;
    while(t--){
       // cout<<"t "<<t<<endl;
        solve();
     }
 
    return 0;
}