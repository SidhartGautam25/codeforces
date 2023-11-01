#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
 int n,k,q;
 cin>>n>>k>>q;
 vector<int>arr(n);
 ll ans=0;
 ll len=0;
 for(int i=0;i<n;i++){
    int temp;
    cin>>temp;
    arr[i]=temp;
    if(temp<=q){
        len++;
    }else{
        if(len>=k){
            ans=ans+((len-k+1)*(len-k+2))/2;
        }
        len=0;
    }
 }
 if(len>=k){
       ans=ans+((len-k+1)*(len-k+2))/2;

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