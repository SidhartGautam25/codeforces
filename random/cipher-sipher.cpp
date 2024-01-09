#include <bits/stdc++.h>
using namespace std;

void solve(){
   int n;
   cin>>n;
   string s;
   cin>>s;
   string ans="";
   int i=0;
   while(i<n){
    ans=ans+s[i];
    i++;
    int j=i;
    while(s[j] != s[i-1]){
        j++;
    }
    i=j+1;
   }
   cout<<ans<<endl;
  
}
int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}