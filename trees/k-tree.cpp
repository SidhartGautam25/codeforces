#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    int n,k,d;
    cin>>n>>k>>d;
    vector<vector<int>>dp(n+1,vector<int>(2,0));
    dp[0][0]=1;
    dp[0][1]=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=k;j++){
            if(i-j<0){
                break;
            }
            if(j<d){
                dp[i][0]=(dp[i][0]%mod+dp[i-j][0]%mod)%mod;
                dp[i][1]=(dp[i][1]%mod+dp[i-j][1]%mod)%mod;
            }else{
                dp[i][1]=(dp[i][1]%mod+dp[i-j][0]%mod)%mod;
                dp[i][1]=(dp[i][1]%mod+dp[i-j][1]%mod)%mod;

            }
        }
    }
    cout<<dp[n][1]<<endl;
   
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