#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    int n,k;
    cin>>n>>k;
    vector<ll>sum(k);
    
    for(int i=0;i<k;i++){
        cin>>sum[i];
    }
    if(k==1){
        cout<<"YES"<<endl;
        return;
    }
    vector<ll>arr;
    for(int i=1;i<k;i++){
        ll temp=sum[i]-sum[i-1];
        arr.push_back(temp);
    }
    for(int i=1;i<arr.size();i++){
        if(arr[i]<arr[i-1]){
            cout<<"NO"<<endl;
            return;
        }
    }
    if(((arr[0])*(n-k+1))<sum[0]){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    return;
 
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