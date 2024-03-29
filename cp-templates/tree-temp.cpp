#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void build_anses_dp(vector<int>&parent,vector<vector<int>>&dp){
    int n=parent.size();
    int mmax=17;//this number is dur to the case that with 17,we can calculate for any given k upto 10^5
    for(int i=0;i<n;i++){
        dp[0][i]=parent[i];
    }
    for(int i=1;i<mmax;i++){
        for(int j=0;j<n;j++){
            // let say we have to find 8th ansestor,then first we find 4th ansestor,and then again 4th ansestor
            // of the 4th ansestor
            //let say we call 4th ansestor anses1
            //then anses1 will be
            int anses1=dp[i-1][j];//this is because ith box of j is storing 2^i th ansestor,
            // so 8th ansestor means 2^3,means i equal to 3,then 4th ansestor means 2^2,
            // means i-1,3-1 =2,thats why anses1 is equal to dp[i-1][j]

            // now lets say 8th ansestor be anses2,then anses2 will be 4th ansestor of anses 1;
            // so anses2 will be 
            int anses2=dp[i-1][anses1];
            dp[i][j]=anses2;
        }
    }

}

int query_for_kth_ansestor(int node,int k,vector<vector<int>>&dp){
    int mmax=17;
    for(int i=0;i<mmax;i++){
        int mask=(1<<i);
        if((k&mask)>0){
            node=dp[i][node];
        }
    }
    return node;
}


void solve(){
   
 
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while(t--){
        solve();
     }

    return 0;
}