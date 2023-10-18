#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
   int n,red,blue;
   cin>>n>>red>>blue;
   string ans="";
   int q=red/(blue+1);
   int r=red%(blue+1);
   int i=1;
   for(i=1;i<=r;i++){
    int j=1;
    while(j<=q+1){
        ans=ans+"R";
        j++;
    }
    ans=ans+"B";
   }
   for(i=r+1;i<=blue;i++){
     int j=1;
     while(j<=q){
        ans=ans+"R";
        j++;
     }
     ans=ans+"B";
   }
   for(int k=1;k<=q;k++){
       ans=ans+"R";
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