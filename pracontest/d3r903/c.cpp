#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod LLONG_MAX

// for geometry
// https://victorlecomte.com/cp-geo.pdf





void solve(){
    int n;
    cin>>n;
    vector<vector<char>>mat(n,vector<char>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>mat[i][j];
        }
    }
    int count=0;
    int limit=n/2;
    for(int i=0;i<limit;i++){
        // int j=i;
        int end=n-i;
        for(int j=0;j<n/2;j++){
            char a=mat[i][j];
            char b=mat[j][n-i-1];
            char c=mat[n-i-1][n-j-1];
            char d=mat[n-j-1][i];
            int mmax=max(a,max(b,max(c,d)));
            count=count+((mmax-a)+(mmax-b)+(mmax-c)+(mmax-d));

        }
    }
    cout<<count<<endl;
  
    
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