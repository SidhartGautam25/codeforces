#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    int n;
    cin>>n;
    vector<vector<char>>mat(n,vector<char>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            char c;
            cin>>c;
            mat[i][j]=c;
        }
    }
    n=n-1;
    ll ans=0;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            if(mat[i][j] != 'A'){
                   int r=i;
            int col=j;
            char a=mat[i][j];
            mat[i][j]='A';
            char b=mat[c][n-r];
            mat[c][n-r]='A';

            char c=mat[n-r][n-c];
            mat[n-r][n-c]='A';
            char d=mat[n-c][r];
            mat[n-c][r]='A';
            //first
            int cost1=min(abs(a-b),26-abs(a-b))+min(abs(a-c),26-abs(a-c))+min(abs(a-d),26-abs(a-d));
            int cost2=min(abs(a-b),26-abs(a-b))+min(abs(b-c),26-abs(b-c))+min(abs(b-d),26-abs(b-d));
            int cost3=min(abs(c-b),26-abs(c-b))+min(abs(c-a),26-abs(c-a))+min(abs(c-d),26-abs(c-d));
            int cost4=min(abs(d-b),26-abs(d-b))+min(abs(d-c),26-abs(d-c))+min(abs(d-a),26-abs(d-a));
            int cost=min(min(cost1,cost2),min(cost3,cost4));
            ans=ans+cost;
            }
           
        }
    }
    cout<<ans<<endl;
 
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