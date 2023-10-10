#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    ll x;
    cin>>x;
    int steps=1;
    int curr=0;
    int count=0;
    while(curr<x){
        curr=curr+steps;
        steps++;
        count++;
    }
    if(curr==x or curr-x>1){
        cout<<count<<endl;
        return;
    }else{
        count=count+1;
        cout<<count<<endl;
        return;
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