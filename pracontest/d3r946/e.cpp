#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    int m,x;
    cin>>m>>x;
    vector<int>h(m);
    vector<int>c(m);
    int totalHapp=0;
    for(int i=0;i<m;i++){
        int t1,t2;
        cin>>t1>>t2;
        c[i]=t1;
        h[i]=t2;
        totalHapp=totalHapp+t2;
    }
    vector<int>dp(totalHapp+1,LLONG_MAX);
    dp[0]=0;
    for(int i=0;i<m;i++){
        for(int j=totalHapp;j>=h[i];j--){
            if(dp[j-h[i]] != LLONG_MAX){
                 if(dp[j-h[i]]+c[i]<=(i*x)){
                dp[j]=min(dp[j],dp[j-h[i]]+c[i]);
            }

            }
           
        }
    }

    for(int i=totalHapp;i>=0;i--){
        if(dp[i] != LLONG_MAX){
            cout<<i<<endl;
            return;
        }
    }
   
    



}
 

 
signed main() {
    int t;
    cin >> t;
    for (int i = 1; i <= t; ++i) {
        solve();
        
    }
    return 0;
}