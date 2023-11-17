#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    ll sum=0;

    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        a[i]=temp;
        sum=sum+temp;
    }

    ll ans=1;
    ll curr=0;
    for(int i=0;i<n-1;i++){
        curr=curr+a[i];
        ll temp=__gcd(curr,sum-curr);
        ans=max(ans,temp);
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