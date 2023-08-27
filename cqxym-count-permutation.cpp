#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int M=1000000007;
    long long ans=1;
    for(int i=3;i<=2*n;i++){
        ans=((ans%M)*(i%M))%M;
    }
    cout<<ans<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}