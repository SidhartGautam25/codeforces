#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    string a,b;
    cin>>a>>b;
    int n=a.size();
    int m=b.size();
    vector<int>count(n+1);
    count[0]=0;
    for(int i=0;i<n;i++){
        if(a[i]=='1'){
            count[i+1]=count[i]+1;
        }else{
            count[i+1]=count[i];
        }
    }
    int one=0;
    for(int i=0;i<m;i++){
        if(b[i]=='1'){
            one++;
        }
    }
    int ans=0;
    for(int i=m;i<=n;i++){
        if((one%2)==((count[i]-count[i-m])%2)){
            ans++;
        }
    }
    cout<<ans<<endl;
    return;

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