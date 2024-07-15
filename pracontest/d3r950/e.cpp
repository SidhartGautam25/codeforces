#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve(int tt){
 int n,m;
 cin>>n>>m;
 vector<vector<int>>mat(n,vector<int>(m));
 vector<vector<int>>final(n,vector<int>(m));
 map<int,int>mpri;
 map<int,int>mpci;
 map<int,int>mprf;
 map<int,int>mpcf;
 for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>mat[i][j];
        mpri[mat[i][j]]=i;
        mpci[mat[i][j]]=j;
    }
 }

 for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>final[i][j];
        mprf[final[i][j]]=i;
        mpcf[final[i][j]]=j;
    }
 }

 for(int i=0;i<n;i++){
    int startr=mpri[final[i][0]];
    for(int j=1;j<m;j++){
        if(startr != mpri[final[i][j]]){
            cout<<"NO"<<endl;
            return;
        }
    }
 }
 for(int j=0;j<m;j++){
    int startc=mpci[final[0][j]];
    for(int i=1;i<n;i++){
        if(startc != mpci[final[i][j]]){
            cout<<"NO"<<endl;
            return;
        }
    }
 }
 cout<<"YES"<<endl;

}
 

 
signed main() {
    int t;
    cin >> t;
    for (int i = 1; i <= t; ++i) {
        solve(i);
        
    }
    return 0;
}