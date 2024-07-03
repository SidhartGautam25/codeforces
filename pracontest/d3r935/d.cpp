#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    int n,m;
    cin>>n>>m;
    m--;
    vector<int>a(n);
    vector<int>b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    vector<int>mmin(m+1,0);
    int mn=0;
    for(int i=m;i>=0;i--){
        mmin[i]=mn;
        mn=mn+min(a[i],b[i]);
    }
    int ans=LLONG_MAX;
    for(int i=0;i<=m;i++){
        ans=min(ans,mmin[i]+a[i]);
    }
    for(int i=m+1;i<n;i++){
        ans=ans+min(a[i],b[i]);
    }
    cout<<ans<<endl;
   
    
   
}
 

 
signed main() {
    int t;
    cin >> t;
    for (int i = 1; i <= t; ++i) {
        solve();
        
    }
    return 0;
}