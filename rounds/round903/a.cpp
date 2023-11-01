#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    ll n;
    cin>>n;
    vector<ll>arr(n);
    for(int i=0;i<n;i++){
        ll temp;
        cin>>temp;
        arr[i]=temp;
    }
    bool check=true;
    ll count=0;
    ll i=1;
    while(i<=n){
        ll temp=1<<count;
        vector<ll>box;
        while(i<=temp and i<=n){
            box.push_back(arr[i-1]);
            i++;
        }
        for(ll j=1;j<box.size();j++){
            if(box[j]<box[j-1]){
                check=false;
            }
        }
        count++;
    }
    if(check==true){
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
 
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