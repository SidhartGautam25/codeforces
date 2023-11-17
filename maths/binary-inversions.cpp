#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    ll n;
    cin>>n;
    vector<ll>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    ll count=0;
    ll ans=0;
    ll zero_count=0;
    ll one_count=0;
    ll j=0;
    ll obfz=0;
    ll zblo=0;
    while(j<n and a[j]==1){
        j++;
        obfz++;

    }
    j=n-1;
    while(j>=0 and a[j]==0){
        j--;
        zblo++;
    }
    for(int i=0;i<n;i++){
        if(a[i]==1){
            count++;
            one_count++;
        }else{
            ans=ans+count;
            zero_count++;
        }
    }
    ll temp=ans;
    ans=max(temp,temp+(zero_count-1)-(obfz));
    ans=max(ans,temp+(one_count-1)-(zblo));
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