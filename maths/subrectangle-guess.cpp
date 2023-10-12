#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    ll n,m;
    cin>>n>>m;
    ll mi=-1;
    ll mj=-1;
    ll mmax=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            ll temp;
            cin>>temp;
            if(temp>mmax){
                mmax=temp;
                mi=i;
                mj=j;
            }

        }
    }
    ll h=max(mi+1,n-mi);
    ll w=max(mj+1,m-mj);
    ll area=h*w;
    cout<<area<<endl;
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