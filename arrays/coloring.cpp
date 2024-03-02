#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007



void solve(){
    ll n,m,k;
    cin>>n>>m>>k;
    vector<ll>arr(m+1,0);
    for(ll i=1;i<=m;i++){
        cin>>arr[i];
    }
    if(m<k){
        cout<<"NO"<<endl;
        return;
    }
    int x=n/k;
    int y=n%k;
    int a,b;
    int pos=0;
    if(y==0){
        a=x;
        b=k;
    }else{
        a=x+1;
        b=n%k;
    }
    for(int i=1;i<=m;i++){
        if(arr[i]>a){
            pos=-1;
        }else if(arr[i]==a){
            b--;
        }
       
    }
    if(pos==-1 or b<0){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    return;
    
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        solve();
     }

    return 0;
}