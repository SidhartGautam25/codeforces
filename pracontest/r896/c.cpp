#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod LLONG_MAX



void solve(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>mat(n,vector<int>(m));
    if(m==1){
        cout<<0<<endl;
    }
    else if(n>=(m-1)){
        cout<<m<<endl;
    }else{
        int ans=n+1;
        cout<<ans<<endl;
    }
    for(int i=0;i<n;i++){
        int start;
        if(i<(m-1)){
            start=i;
        }else{
            start=m-2;
            
        }
        if(start<0){
            start=0;
        }
        for(int j=0;j<m;j++){
            mat[i][j]=start;
            start=(start+1)%m;
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
   



    
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