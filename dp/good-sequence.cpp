#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define mod LLONG_MAX


void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>dp(n,1);
    vector<int>div(arr[n-1]+1,0);
    int ans=1;
    for(int i=0;i<n;i++){
        int num=arr[i];
        map<int,int>mp;
        int mmax=0;
        for(int j=1;j*j<=num;j++){
            if(num%j==0 and j != 1){
                mmax=max(mmax,div[j]);
                mp[j]=1;
               
                
            }
            int jj=num/j;
            if(jj != j and jj != 1 and num%jj==0){
                mmax=max(mmax,div[jj]);
                mp[jj]=1;
                
            }
        }
        dp[i]=mmax+1;
        for(auto it:mp){
            int x=it.first;
            div[x]=max(div[x],dp[i]);
        }
        ans=max(ans,dp[i]);
    }
    // for(int i=0;i<n;i++){
    //     cout<<dp[i]<<" ";
    // }
    // cout<<endl;
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