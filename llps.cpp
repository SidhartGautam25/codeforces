#include <bits/stdc++.h>
using namespace std;

void solve(){
   string s;
   cin>>s;
   int n=s.size();
   char largest=s[0];

   unordered_map<char,int>mp;
   mp[largest]++;
   for(int i=1;i<n;i++){
     char temp=s[i];
     if(temp>largest){
        largest=temp;
     }
     mp[temp]++;

   }
   string ans="";
   for(int i=0;i<mp[largest];i++){
    ans=ans+largest;
   }
   cout<<ans<<endl;

}
int main() {
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }

    return 0;
}